// DEFINICOES
#define BLACK_CAL 0
#define WHITE_CAL 1
#define READ_VAL  2
#define LEARN_VAL 3

byte ctIndex;
colorData rgb;

// Color Table for matching
typedef struct {
  char    name[10];  //TAMANHO MAXIMO DO NOME
  colorData rgb;    
} colorTable;

// Calibration data
sensorData sdBlack = { 7700, 8380, 11280 };
sensorData sdWhite = { 73250, 76590, 96790 };

colorTable ct[] = {
  {"BRANCO", {250, 250, 249 } }, //      MP3/0001.mp3
  {"VERMELHO",   {154, 26, 30  } }, //  MP3/0002.mp3
  {"VERDE", {50, 73, 33  } }, //       MP3/0003.mp3
  {"AZUL",  {7, 33, 73 } }, //       MP3/0004.mp3
  {"LARANJA",{203, 42, 28  } }, //      MP3/0005.mp3
  {"PRETO", {0  , 0   , 0   } }  //       MP3/0006.mp3
};

uint8_t colorMatch(colorData *rgb) {
  int32_t   d;
  uint32_t  v, minV = 999999L;
  uint8_t   minI;

  for (uint8_t i=0; i<ARRAY_SIZE(ct); i++){
    v = 0;
    for (uint8_t j=0; j<RGB_SIZE; j++){
      d = ct[i].rgb.value[j] - rgb->value[j];
      v += (d * d);
    }
    if (v < minV) {
      minV = v;
      minI = i;
    }
    if (v == 0)   // perfect match, no need to search more
      break;
  }

  return(minI);
}
