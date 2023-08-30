#include <iostream>
#include <ctime>
#include "Emppleado.h"
#include "fecha.h"
using namespace std;

int main()
{

    Emppleado juan;
    fecha cont;
    fecha nac;
    nac.set_fecha(99,2,1764);

    juan.set_Empleado("juan", "peres",cont,nac);

    juan.imprimir();


    return 0;
}
