
#include <iostream>
using namespace std;
int main(){
//Constantes
    /*
    const double IVA=0.12;
    const double PROPINA=0.10;
    int monto=0;
    cout <<"Ingrese el monto de consumo"<< endl;
    cin>>monto;
    cout <<"El monto a cobrar es: Q" <<monto+monto*(IVA+PROPINA)<< endl;
    */

//anidando estructuras de control

    char continuar='s';

    while (continuar=='s'||continuar=='S'){
        int numero;
        cout<<"Ingrese un numero"<< endl;
        cin>>numero;

        if(numero>0){
            cout<<"El numero es positivo"<< endl;
        }else if(numero<0){
            cout<<"El numero es negativo"<< endl;
        }else{
            cout<<"El numero es cero"<< endl;
        }

        do{
            cout<<"Desea continuar? (S/N)"<<endl;
            cin>>continuar;
        }while(continuar!='s' && continuar!='S' && continuar!='n'&& continuar!='N');
            
    }
    cout<<"Fin del programa"<<endl;

    return 0;
}