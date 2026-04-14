/**
 * Essa atividade serve como exemplo dentro da biblioteca
 */

#include <Arduino.h>
#include <LED.h>

LED ledAzul(20);

void setup() 
{
  ledAzul.piscar(10, 10000);
}

void loop()
{
  ledAzul.update();
}
