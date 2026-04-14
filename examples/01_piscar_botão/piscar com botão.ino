/**
 * Essa atividade serve como exemplo dentro da biblioteca
 */

#include <Arduino.h>
#include <LED.h>

const int botaoBoot = 0;

LED ledAzul(20);

void setup() 
{
  pinMode(botaoBoot, INPUT_PULLUP);
}

void loop()
{
  ledAzul.update();

  bool estadoBotaoBoot = digitalRead(botaoBoot);
  static bool estadoAnteriorBotao = 1;

  if(!estadoBotaoBoot && estadoAnteriorBotao)
  {
    ledAzul.piscar(5, 10);
  }
  estadoAnteriorBotao = estadoBotaoBoot;
}
