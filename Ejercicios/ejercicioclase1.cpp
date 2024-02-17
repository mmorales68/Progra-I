#include <iostream>
#include<cmath>
using namespace std;
int main(){
//tabla del 4
    for (size_t i = 0; i < 10; i++){
        cout<<"4 X "<< i+1 <<" = "<<(i+1)*4<<endl;
    }
//tabla del 6
    for (size_t i = 0; i < 10; i++){
        cout<<"6 X "<< i+1 <<" = "<<(i+1)*6<<endl;
    }
//tabla de un numero n
    
    int numero=0;
    cout<<"Ingrese un numero para generar la tabla de multiplicar"<<endl;
    cin>>numero;

    for (size_t i = 0; i < 10; i++){
        cout<<numero <<" X "<< i+1 <<" = "<<(i+1)*numero<<endl;
    }

//factorial de un numero
    int numeroFactorial;
    int resultadoFactorial=1;

    cout<<"Ingrese un numero para calcular su factorial"<<endl;
    cin>>numeroFactorial;

    for (size_t i = 1; i <= numeroFactorial; i++){
        resultadoFactorial=(resultadoFactorial*i);
    }

    cout<<"El factorial es "<<resultadoFactorial<<endl;
    
    return 0;
}