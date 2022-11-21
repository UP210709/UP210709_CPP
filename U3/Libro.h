#include <iostream>
#include <math.h>
using namespace std;

int suma(int x, int y){
    return (x+y);
}

double G2R(double g){
    double r;
    r=g*M_PI/180;
    return r;
}

double R2G(double r){
    double g;
    g=r*180/M_PI;
    return g;
}

double seno(double a){
    return sin(G2R(a));
}

bool esBisiesto(int ano){
    bool r;
    r = ano%400==0 || ano%4==0 && ano%100!=0;
    return r;
}