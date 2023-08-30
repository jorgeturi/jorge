#ifndef FECHA_H
#define FECHA_H

using namespace std;

class fecha
{
    public:
        fecha();
        virtual ~fecha();
        void set_fecha (int,int,int);
        void set_dia (int);
        void set_mes (int);
        void set_anio (int);
        void imprimir();
    protected:

    private:
        int dia;
        int mes;
        int anio;
};

#endif // FECHA_H
