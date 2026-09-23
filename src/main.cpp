#include <Arduino.h>
#include "Estrategia.h"
#include <robo_hardware2.h>

Estrategia estrategia;


void setup() {
  robo.configurar();
}

void loop() {
  // put your main code here, to run repeatedly:
  estrategia.executar();
}