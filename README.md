<p align="center">
    <img width="100" src="assets/faci.png">
</p>


<p align="center">
  <a href="#"><img src="assets/Prototipo2.jpg" alt="Projeto">
  </a>
  
</p>

-------

<p align="center">
  <img 
    src="assets/Prototipofinal.png"
    width="400"  
  />
</p>

# COLORSENSE
Tecnologia Portátil para Identificação de Cores em Roupas para Deficientes Visuais


 > ℹ️ **NOTE:** Este é o repositório desenvolvido durante o projeto de extensão na disciplina de Programação de Microcontroladores no qual fui aluno na plataforma da [Faculdade Faci Wyden](https://www.wyden.com.br/) com o professor [Paulo Tássio da Luz Melo](https://www.linkedin.com/in/paulotassio/).

<p align="center">
  <a href="#" title="Preview do Conteúdo">
  <img src="assets/EquipeProjeto.png" width="80%">
  </a>
<p>

O projeto intitulado “COLORSENSE: Tecnologia Portátil para Identificação de Cores em Roupas para Deficientes Visuais” tem como objetivo utilizar a tecnologia assistiva. Nossa proposta é desenvolver um dispositivo portátil que permita a um deficiente visual identificar a cor das roupas que está usando ou irá usar, utilizando microcontroladores e sensores. Com o apoio da Associação Paraense das Pessoas com Deficiência, esperamos proporcionar ao deficiente visual bem-estar, qualidade de vida e satisfação pessoal ao poder escolher as cores de suas roupas sem o auxílio de outras pessoas e fortalecer o vínculo entre a universidade e a comunidade local.

Equipe:
- José Roberto Vasconcellos Lopes
- Thiago Sousa Vasconcellos Lopes
- Luiz Felipe Barata Queiroz
- Luiz Henrique Gualberto Scotta
- Rafaela Mesquita Moraes de Almeida

<a href="#" title="View PDF now"> 📕Clique aqui para ler o artigo</a>

## 💻 Tecnologias utilizadas no projeto

- [Arduino] - para desenvolver o código;
- [Thinkercad] - para desenvolver e testar o código;
- [SketchUp] - para gerar o case 3D em arquivo .stl;
- [Fusion 360] - para gerar o case 3D em arquivo .stl;
- [Creality Print] - Impressora 3D para gerar o case físico;
- [Kiri:Moto](https://grid.space/kiri/) - Para conversão de arquivos .stl para .gcode.

## 📄 Gerado na IDE do Arduino

Código：

|   Arquivo   | descrição                                                                                                                                                                                                                                                                         |
| :------: | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
|  Q0704_LeitorDeCor_TCS3200.ino  | Este código em C++ usa o sensor de cor TCS230 e o módulo de som DFPlayer Mini para ler a cor detectada e tocar um arquivo de áudio correspondente. Bibliotecas e Objetos: Inclui as bibliotecas para o sensor de cor, para a contagem de frequência e para o controle de um MP3 player. Pinos e Componentes: Define os pinos para os componentes (sensor de cor, LED e botão). Configuração Inicial: No setup(), inicializa o sensor de cor, configura o botão, o LED e chama a função configuraMP3() para ajustar o módulo MP3, incluindo o volume. Loop Principal: Ao detectar o pressionamento do botão, o LED acende e o sensor de cor lê a cor. Após a leitura, exibe os valores RGB e o nome da cor correspondente. Toca o arquivo de áudio associado, onde cada cor tem um número que corresponde a um arquivo de som numerado na pasta MP3 do DFPlayer Mini. O LED é desligado após a execução do áudio. Este código permite identificar cores e tocar um som específico para cada uma, criando uma interação áudio-visual.                                                                                                                                                                                                    |
| ColorMatch.h | Este código define uma estrutura para reconhecer cores e associá-las a valores específicos, permitindo identificar a cor mais próxima de uma leitura RGB. Definições e Dados de Calibração: BLACK_CAL, WHITE_CAL, READ_VAL, e LEARN_VAL definem estados de operação; sdBlack e sdWhite são valores de calibração para preto e branco, usados para ajustar o sensor. Tabela de Cores: colorTable é uma estrutura que associa um nome a valores RGB de cada cor, e a tabela ct[] contém seis cores pré-definidas (BRANCO, VERMELHO, VERDE, AZUL, LARANJA e PRETO), cada uma com seus valores RGB e um arquivo de áudio MP3 correspondente. Função colorMatch(): Essa função recebe um valor RGB lido e calcula a distância entre ele e cada cor na tabela ct[], usando a soma dos quadrados das diferenças para medir similaridade. Retorna o índice da cor mais próxima (ou igual, se a distância for zero). Este código é projetado para identificar a cor mais próxima entre as opções da tabela e pode ser integrado a um sistema que reproduz sons específicos para cada cor reconhecida. |

## ✨ Características

- Portátil
- Cor: preto;
- Botão liga/desliga;
- Botão Push para leitura de cores;
- Medidas: 20cm x 6,5cm x 5cm (L x P x A);
- 2 Baterias de lítio recarregáveis (4.2v cada);
- Placa para balanceamento de carga;
- Fonte para carregamento 7 a 12v.

## 📚 Materiais

- Arduino UNO;
- Sensor de cor TCS3200;
- Módulo de áudio DFPlayer Mini;
- Cartão SD 8GB;
- Duas baterias de Li-Po (Lítio-Polímero) 3.7V;
- Placa BMS 3S 12V 100A;
- Botão para ligar e desligar o dispositivo;
- Botão push para acionar a leitura do sensor de cor;
- Jump’s de ligação;
- Alto-falante
- parafusos

## 🛠️ Instruções de uso

Ligue o dispositivo, pressione e solte o botão para aleitura de cor, encoste a parte frontal junto a roupa. O led acenderá e será reproduzido em áudio a cor da roupa.

## 👨‍💻 Expert

<p>
    <img 
      align=left 
      margin=10 
      width=80 
      src="https://avatars.githubusercontent.com/u/79292597?s=96&v=4"
    />
    <p>&nbsp&nbsp&nbspJosé Roberto Vasconcellos Lopes<br>
    &nbsp&nbsp&nbsp
    <a href="https://github.com/jrobertovl">GitHub</a>&nbsp;|&nbsp;
    <a href="https://www.linkedin.com/in/jrobertovl">LinkedIn</a>&nbsp;|&nbsp;
    <a href="https://www.instagram.com/jrobertovl/">Instagram</a>&nbsp;|&nbsp;
    <a href="https://api.whatsapp.com/send?phone=5591982003052">WhatsApp</a>
    </p>
</p>
<br/><br/>
<p>

---

⌨️ com 💜 por [José Roberto Vasconcellos Lopes](https://github.com/jrobertovl)

