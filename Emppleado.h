#ifndef EMPPLEADO_H
#define EMPPLEADO_H
#include "fecha.h"
#include<ctime>

class Emppleado
{
    public:
        Emppleado();
        virtual ~Emppleado();
        void set_Empleado (const char[],const char[],fecha,fecha);
        void imprimir();

    protected:

    private:
    char nombres[25];
    char apellido[25];
    fecha FechaContratacion;
    fecha FechaNacimiento;

};

#endif // EMPPLEADO_H
