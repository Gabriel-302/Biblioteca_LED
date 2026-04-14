/**
 * Essa atividade serve como exemplo dentro da biblioteca
 */

#include <Arduino.h>
#include <LED.h>

const int botaoBoot = 0;

LED ledAzul(20);

void setup() 
{
  ledAzul.acender(5000);
}

void loop()
{
  ledAzul.update();
}
