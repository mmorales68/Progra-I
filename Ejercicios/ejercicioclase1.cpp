#include <iostream>
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

//Serie de Fibonacci
    int i=0;
    double a=1,b=0,c=0;
   
    while (i<50){
        i++;
        cout<<c<<", ";
        c=a+b;
        a=b; 
        b=c;
    }

//validacion de numeros primos
    int numeroEntrada;

    cout<<"Ingrese un numero para verificar si es primo o no"<<endl;
    cin>>numeroEntrada;
        
    if(numeroEntrada==1){
        cout <<numeroEntrada<<" no es primo"<< endl;
    }else{
        int contador=2;
        while(numeroEntrada%contador!=0){
            contador++;      
        }

        if(contador==numeroEntrada){     
            cout <<numeroEntrada<<" es un numero primo"<< endl;   
        }else{
            cout <<numeroEntrada<<" no es primo"<< endl; 
        }
    }

//validar si un numero es par o impar

int n;
cout <<"Ingrese un numero para validar si es par o impar"<<endl;
cin>>n;
if (n%2!=0){
    cout<<n<<" es numero impar"<<endl;
}else{
    cout<<n<<" es numero par"<<endl;
}

    return 0;
}