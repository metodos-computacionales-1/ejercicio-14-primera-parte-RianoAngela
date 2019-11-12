#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

double f0(double t, double y0, double y1); 
double f1(double t, double y0, double y1); 
void euler(double dt, string nombre);

const double K = 100;
const double M = 2;
const double LAMBDA = 1;
const double DeltaT = 0.01;

int main ()
{
    euler(DeltaT, "euler.dat");
    return 0;
}

double f0(double t, double y0, double y1)
{
  return y1;
}

double f1(double t, double y0, double y1)
{
  return (-K/M)*pow(y0, LAMBDA);
}

void euler(double DeltaT, string nombre)
{
    int pasos = 1000;
    double x_presente[pasos],y_presente[pasos],vx_presente[pasos],vy_presente[pasos];
    double energia[pasos];
    
    ofstream outfile;
    outfile.open(nombre);
    
    //condiciones iniciales
    x_presente[0] = ;
    y_presente[0] = ;
    vx_presente[0] = ;
    vy_presente[0] = ;
    
}
