#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

double derivada1(double t, double y, double x); 
double derivada2(double t, double v, double x);
void euler(double dt, string nombre);

const double K = 100;
const double M = 2;
const double LAMBDA = 1;

int main ()
{
    euler(0.01, "euler.dat");
    cout<<"Se espera que la solucion sea en terminos de seno y coseno, puesto que es un oscilador armonico ";
    return 0;
}

double derivada1(double t, double v, double x)
{
  return v;
}

double derivada2(double t, double v, double x)
{
  return (-K*x);
}

void euler(double DeltaT, string nombre)
{
    int pasos = 1000;
    double x[pasos],vx[pasos];

    ofstream outfile;
    outfile.open(nombre);
    
    //condiciones iniciales
    x[0] = 1;
    vx[0] = 0;
    
    outfile<< x[0]<<" "<<vx[0]<<" "<<endl;
    
    double t=0.0;
    for (int i=1;i<=20;i++)
    {
        x[i] = (vx[i-1]*DeltaT)+x[i-1];
        vx[i] = (x[i-1]*DeltaT)+vx[i-1];   
        outfile<< x[i]<<" "<<vx[i]<<" "<<endl;
        t=t+DeltaT;
    }
    outfile.close();
    
}
