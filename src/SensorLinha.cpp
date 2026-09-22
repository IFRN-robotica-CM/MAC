#include "SensorLinha.h"

void SensorLinha::ler_sensor(){
    valorSensorMaisEsq = robo.lerSensorLinhaMaisEsq(); //le um valor do sensor. O sensor retornar um valor de 0 100
	valorSensorEsq = robo.lerSensorLinhaEsq();         //le um valor do sensor. O sensor retornar um valor de 0 100
	valorSensorDir = robo.lerSensorLinhaDir();         //le um valor do sensor. O sensor retornar um valor de 0 100
	valorSensorMaisDir = robo.lerSensorLinhaMaisDir(); //le um valor do sensor. O sensor retornar um valor de 0 100
}