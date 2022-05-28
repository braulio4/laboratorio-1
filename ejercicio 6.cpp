#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

string binario(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main() {
    int numero;
    cout<<"ingrese un numero mayor que 100 y menor que 999 "; cin>>numero;
    cout<<endl;
	if(numero>=100 && numero<=999){
	    cout << "decimal: " << numero << endl;
	    cout << "binario : " << binario(numero) << endl;		
	}
	else{
		cout<<"ingreso un numero fuera del rango"<<endl;
	}

    return EXIT_SUCCESS;
}