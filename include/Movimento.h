#include <robo_hardware2.h>

#define VEL_PARA_FRENTE 50
#define VEL_PARAR 0

class Movimento{
    public:

    inline void paraFrente(){ robo.acionarMotores(VEL_PARA_FRENTE,VEL_PARA_FRENTE); }
    inline void parar(){robo.acionarMotores(VEL_PARAR, VEL_PARAR); }
};