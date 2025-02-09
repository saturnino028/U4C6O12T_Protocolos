#include "main.h"

int main()
{
  ssd1306_t ssd; // Inicializa a estrutura do display
  uint32_t *vetor_fig = open;
  bool cor = true; //Cor do display

  stdio_init_all(); //Inicia funções da biblioteca stdio
  config_i2c_display(); //Configura o I2C para o diplay
  init_pins_gpio(); //Inicia os pinos GPIO que serão utilizados
  init_matriz();

  ssd1306_init(&ssd, WIDTH, HEIGHT, false, endereco, I2C_PORT); // Inicializa o display
  ssd1306_config(&ssd); // Configura o display
  ssd1306_send_data(&ssd); // Envia os dados para o display

  // Limpa o display. O display inicia com todos os pixels apagados.
  ssd1306_fill(&ssd, false);
  ssd1306_send_data(&ssd);

  desenhar_fig(vetor_fig, brilho_matriz);

  gpio_put(LED_R, 1);
  gpio_put(LED_G, status_led_G);
  gpio_put(LED_B, status_led_B);

  ssd1306_fill(&ssd, !cor); // Limpa o display
  ssd1306_rect(&ssd, 3, 3, 122, 58, cor, !cor); // Desenha um retângulo
  ssd1306_draw_string(&ssd, "CEPEDI   TIC37", 8, 10); // Desenha uma string
  ssd1306_draw_string(&ssd, "EMBARCATECH", 20, 30); // Desenha uma string
  ssd1306_draw_string(&ssd, "BEM VINDO", 24, 48); // Desenha uma string      
  ssd1306_send_data(&ssd); // Atualiza o display

  sleep_ms(3000);

  ssd1306_fill(&ssd, !cor); // Limpa o display
  ssd1306_rect(&ssd, 3, 3, 122, 58, cor, !cor); // Desenha um retângulo
  ssd1306_draw_string(&ssd, "CEPEDI   TIC37", 8, 10); // Desenha uma string
  ssd1306_draw_string(&ssd, "DIGITE UM CHAR", 8, 30); // Desenha uma string
  ssd1306_draw_string(&ssd, "OU NUMERO", 30, 48); // Desenha uma string      
  ssd1306_send_data(&ssd); // Atualiza o display

  
  gpio_set_irq_enabled_with_callback(bot_A, GPIO_IRQ_EDGE_FALL, true, botoes_callback); //Interrupção SDK

  gpio_set_irq_enabled_with_callback(bot_B, GPIO_IRQ_EDGE_FALL, true, botoes_callback); //Interrupção SDK

  while (true)
  {
    int c = getchar_timeout_us(1000); //Fazer leitura da serial

    if(c != '\0' && c > 0)
    {
      uint8_t x = 8, y = 32;
      // Atualiza o conteúdo do display com caracater
      switch (c)
      {
        case '0':
          ssd1306_fill(&ssd, !cor); // Limpa o display
          ssd1306_draw_string(&ssd, "Voce digitou", x, y); // Desenha uma string
          ssd1306_draw_char(&ssd, c, x+102,y); 
          ssd1306_send_data(&ssd); // Atualiza o display
          printf("Voce Digitou: %c\n", c);

          vetor_fig = &fig_0;
          desenhar_fig(vetor_fig, brilho_matriz);
          break;
        case '1':
          ssd1306_fill(&ssd, !cor); // Limpa o display
          ssd1306_draw_string(&ssd, "Voce digitou", x, y); // Desenha uma string
          ssd1306_draw_char(&ssd, c, x+102,y); 
          ssd1306_send_data(&ssd); // Atualiza o display
          printf("Voce Digitou: %c\n", c);

          vetor_fig = &fig_1;
          desenhar_fig(vetor_fig, brilho_matriz);
        break;
        case '2':
          ssd1306_fill(&ssd, !cor); // Limpa o display
          ssd1306_draw_string(&ssd, "Voce digitou", x, y); // Desenha uma string
          ssd1306_draw_char(&ssd, c, x+102,y); 
          ssd1306_send_data(&ssd); // Atualiza o display
          printf("Voce Digitou: %c\n", c);

          vetor_fig = &fig_2;
          desenhar_fig(vetor_fig, brilho_matriz);
        break;
        case '3':
          ssd1306_fill(&ssd, !cor); // Limpa o display
          ssd1306_draw_string(&ssd, "Voce digitou", x, y); // Desenha uma string
          ssd1306_draw_char(&ssd, c, x+102,y); 
          ssd1306_send_data(&ssd); // Atualiza o display
          printf("Voce Digitou: %c\n", c);

          vetor_fig = &fig_3;
          desenhar_fig(vetor_fig, brilho_matriz);
        break;
        case '4':
          ssd1306_fill(&ssd, !cor); // Limpa o display
          ssd1306_draw_string(&ssd, "Voce digitou", x, y); // Desenha uma string
          ssd1306_draw_char(&ssd, c, x+102,y); 
          ssd1306_send_data(&ssd); // Atualiza o display
          printf("Voce Digitou: %c\n", c);

          vetor_fig = &fig_4;
          desenhar_fig(vetor_fig, brilho_matriz);
        break;
        case '5':
        ssd1306_fill(&ssd, !cor); // Limpa o display
        ssd1306_draw_string(&ssd, "Voce digitou", x, y); // Desenha uma string
        ssd1306_draw_char(&ssd, c, x+102,y); 
        ssd1306_send_data(&ssd); // Atualiza o display
        printf("Voce Digitou: %c\n", c);

        vetor_fig = &fig_5;
        desenhar_fig(vetor_fig, brilho_matriz);
        break;
        case '6':
        ssd1306_fill(&ssd, !cor); // Limpa o display
        ssd1306_draw_string(&ssd, "Voce digitou", x, y); // Desenha uma string
        ssd1306_draw_char(&ssd, c, x+102,y); 
        ssd1306_send_data(&ssd); // Atualiza o display
        printf("Voce Digitou: %c\n", c);

        vetor_fig = &fig_6;
        desenhar_fig(vetor_fig, brilho_matriz);
        break;
        case '7':
        ssd1306_fill(&ssd, !cor); // Limpa o display
        ssd1306_draw_string(&ssd, "Voce digitou", x, y); // Desenha uma string
        ssd1306_draw_char(&ssd, c, x+102,y); 
        ssd1306_send_data(&ssd); // Atualiza o display
        printf("Voce Digitou: %c\n", c);

        vetor_fig = &fig_7;
        desenhar_fig(vetor_fig, brilho_matriz);
        break;
        case '8':
        ssd1306_fill(&ssd, !cor); // Limpa o display
        ssd1306_draw_string(&ssd, "Voce digitou", x, y); // Desenha uma string
        ssd1306_draw_char(&ssd, c, x+102,y); 
        ssd1306_send_data(&ssd); // Atualiza o display
        printf("Voce Digitou: %c\n", c);

        vetor_fig = &fig_8;
        desenhar_fig(vetor_fig, brilho_matriz);
        break;
        case '9':
        ssd1306_fill(&ssd, !cor); // Limpa o display
        ssd1306_draw_string(&ssd, "Voce digitou", x, y); // Desenha uma string
        ssd1306_draw_char(&ssd, c, x+102,y); 
        ssd1306_send_data(&ssd); // Atualiza o display
        printf("Voce Digitou: %c\n", c);

        vetor_fig = &fig_9;
        desenhar_fig(vetor_fig, brilho_matriz);
        break;
        case '+': //Aumenta o brilho da matriz de LEDS
          if(brilho_matriz <100)
            brilho_matriz = brilho_matriz +5;
          else
            brilho_matriz = 100;
          desenhar_fig(vetor_fig, brilho_matriz);
          printf("Brilho em: %d", brilho_matriz);
        break;
        case '-': //Reduz o brilho da matriz de LEDS
          if(brilho_matriz > 0 )
            brilho_matriz = brilho_matriz -5;
          else
            brilho_matriz = 0;
          desenhar_fig(vetor_fig, brilho_matriz);
          printf("Brilho em: %d", brilho_matriz);
        break;
        case '*':      
          // Atualiza o conteúdo do display com animações
          ssd1306_fill(&ssd, !cor); // Limpa o display
          ssd1306_draw_string(&ssd, "Modo Gravacao", 8, 10); // Desenha uma string
          ssd1306_send_data(&ssd); // Atualiza o display
          entrar_modo_gravacao();
        break;

        default:
          ssd1306_fill(&ssd, !cor); // Limpa o display
          ssd1306_draw_string(&ssd, "Voce digitou", x, y); // Desenha uma string
          ssd1306_draw_char(&ssd, c, x+102,y); 
          ssd1306_send_data(&ssd); // Atualiza o display
          printf("Voce Digitou: %c\n", c);

          vetor_fig = &open;
          desenhar_fig(vetor_fig, brilho_matriz);
          break;
      }
    }
    
    if(botoes_flag != 0)
    {
      gpio_put(LED_R, 0);
      if(botoes_flag == 1) //Tecla A
      {
        if(status_led_G)
        {
          printf("LED Verde On");
          ssd1306_fill(&ssd, !cor); // Limpa o display
          ssd1306_draw_string(&ssd, "LED verde On", 8, 40); // Desenha uma string
          ssd1306_send_data(&ssd); // Atualiza o display
        }
        else if(!status_led_G)
        {
          printf("LED Verde Off");
          ssd1306_fill(&ssd, !cor); // Limpa o display
          ssd1306_draw_string(&ssd, "LED verde Off", 8, 40); // Desenha uma string
          ssd1306_send_data(&ssd); // Atualiza o display

        }
      }
      else if (botoes_flag == 2) //Tecla B
      {        
        if(status_led_B)
        {
          printf("LED Azul On");
          ssd1306_fill(&ssd, !cor); // Limpa o display
          ssd1306_draw_string(&ssd, "LED Azul On", 8, 40); // Desenha uma string
          ssd1306_send_data(&ssd); // Atualiza o display
        }
        else if(!status_led_B)
        {
          printf("LED Azul Off");
          ssd1306_fill(&ssd, !cor); // Limpa o display
          ssd1306_draw_string(&ssd, "LED Azul Off", 8, 40); // Desenha uma string
          ssd1306_send_data(&ssd); // Atualiza o display

        }
      }
      if(!status_led_G && !status_led_B) //Se os LEDs verde e azul e estiverem apagados liga o vermelho
        gpio_put(LED_R, 1);
      botoes_flag = 0;
    }
    sleep_ms(100);
  }
}