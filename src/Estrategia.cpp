#include "Estrategia.h"
#include "SensorLinha.h"
#include "Movimento.h"

SensorLinha sensorLinha;
Movimento movimento;

void Estrategia::executar(){
    // seguir_linha();
    movimento.paraFrente();
    delay(2000);
    movimento.parar();
    delay(500);

}

void Estrategia::seguir_linha(){
    sensorLinha.ler_sensor();

    if(sensorLinha.pppp()){
        
        movimento.parar();
    }
    else if(sensorLinha.bbbb()){

        movimento.paraFrente();
    }
}

void Estrategia::desviar_obstaculo(){

}