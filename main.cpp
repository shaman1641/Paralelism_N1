#include <cmath>
#include <iostream>
#include <cstdlib>

#define _USE_MATH_DEFINES

#ifdef DOUBLE
#define MASSIV double
#endif

#ifndef DOUBLE
#define MASSIV float
#endif



using namespace std;
int main(){
    MASSIV * mass = (MASSIV*) calloc(10000000,sizeof(MASSIV));
    MASSIV summa = 0;
    MASSIV q = 0;
    
    #ifndef DOUBLE
        cout<<"FLOAT \n";
    #endif
    #ifdef DOUBLE
        cout<<"DOUBLE \n";
    #endif
    for(int i = 0; i < 10000000; i++){
        q = sin( ((2 * M_PI)/10000000) * (i+1));
        mass[i] = q;
        summa += q;
    }
    cout << summa;
    free(mass);
    return 0;
}