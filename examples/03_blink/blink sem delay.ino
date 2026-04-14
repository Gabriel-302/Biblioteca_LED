/**
 * Essa atividade serve como exemplo dentro da biblioteca
 */

#include <Arduino.h>
#include <LED.h>

const int botaoBoot = 0;



LED ledAzul(20);

void setup() 
{
}

void loop()
{
  ledAzul.update();

  static unsigned long inicial = 0;
  unsigned long agora = millis();

  if(agora - inicial >= 1000)
  {
    ledAzul.alternar();
    inicial = agora;
  }
}
