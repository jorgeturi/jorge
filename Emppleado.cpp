#include "Emppleado.h"
#include <string.h>
#include<iostream>
#include "fecha.h"

using namespace std;

Emppleado::Emppleado()
{

}

Emppleado::~Emppleado()
{
    //dtor
}


 void Emppleado::set_Empleado (const char Nombre[],const char Apellido[],fecha fecha_contratacion,fecha fecha_nacimiento)
 {
     strcpy(nombres, Nombre);
     strcpy(apellido, Apellido);
     FechaContratacion = fecha_contratacion;
     FechaNacimiento = fecha_nacimiento;

 }

 void Emppleado::imprimir (){

   cout<< "Fecha de conbtrataciobn: ";FechaContratacion.imprimir();
   cout<< "Fecha de nacimiento: ";FechaNacimiento.imprimir();

   cout << nombres<<" "<< apellido<< endl;

}
