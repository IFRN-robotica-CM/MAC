#include "robo_hardware2.h"

#define DIVISOR_BRANCO_PRETO 50

class SensorLinha {
    private:
    float valorSensorMaisEsq;
	float valorSensorEsq;  
	float valorSensorDir;   
	float valorSensorMaisDir; 

    public:
    void ler_sensor();

    inline bool pppp(){return (valorSensorMaisEsq < DIVISOR_BRANCO_PRETO &&  valorSensorEsq < DIVISOR_BRANCO_PRETO);}
    inline bool bbbb(){return (valorSensorMaisEsq > DIVISOR_BRANCO_PRETO &&  valorSensorEsq > DIVISOR_BRANCO_PRETO);}
};