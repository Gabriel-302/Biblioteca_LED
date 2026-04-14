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

  static bool estadoAnteriorBotaoBoot = 1;
  static int frequencia = 0;
  bool estadoBotaoBoot = digitalRead(botaoBoot);
  
  if(!estadoBotaoBoot && estadoAnteriorBotaoBoot)
  {
    frequencia++;
    ledAzul.piscar(frequencia);
  }
  
  estadoAnteriorBotaoBoot = estadoBotaoBoot;
}
