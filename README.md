# README - U4C6O12T - Sistema de Interface com Display SSD1306

## Descrição
Este projeto implementa uma interface usando recursos da placa de desenvolvimento BitDogLab. 
O sistema inicializa o display via comunicação I2C, exibe mensagens e permite interação do usuário via entrada serial e botões físicos.

## Funcionalidades
- Inicialização do display SSD1306 via I2C
- Exibição de mensagens fixas e dinâmicas
- Resposta a entradas do usuário via serial
- Controle de LEDs com botões
- Ajuste de brilho da matriz de LEDs
- Modo de gravação ativado por comando

## Como Usar
1. Ao ligar o dispositivo, o display exibirá mensagens de boas-vindas;
2. O usuário pode digitar caracteres que serão exibidos no display;
3. O usuário pode digitar números de 0 a 9 para exibir figuras predefinidas no display e na matriz 5x5;
5. Os botões permitem alterar o estado dos LEDs azul e verde (GPIO 11 e 12).
6. O brilho da matriz de LEDs pode ser ajustado com os comandos `+` e `-`.
7. O modo de gravação é ativado pressionando `*`.

## Estrutura do Código
- Inicializa o display e configura a interface I2C
- Monitora entradas da porta serial e dos botões
- Atualiza o display conforme entrada do usuário
- Controla o brilho da matriz de LEDs
- Gerencia a lógica dos LEDs de status

## Melhorias Futuras
- Suporte a mais caracteres e animações
- Implementação de menus interativos

## Como Executar

Para utilizar o programa com o simulador Wokwi, o usuário deve:

1. Clonar este repositório: git clone https://github.com/saturnino028/U4C6O12T_Protocolos.git;
2. Usando a extensão Raspberry Pi Pico importar o projeto;
3. Compilar o código;
4. Usando um cabo USB, gravar o código no Pico W.

---
Desenvolvido para a capacitação em Sistemas Embarcados oferecida pela CEPEDI utilizando o Raspberry Pi Pico W, o simulador Wokwi, o Pico SDK e p kit BitDogLab.
