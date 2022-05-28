#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

void tiempo(int,int&,int&,int&);

int main(){
	int totalseg,horas=5,min=12,sec=24;
	cout<<"HORA DEL DIA:"<<endl;
	cout<<"horas: "<<horas<<endl;
	cout<<"minutos: "<<min<<endl;
	cout<<"segundos: "<<sec<<endl;
	cout<<"ingrese el tiempo transcurrido: "; cin>>totalseg;
	tiempo(totalseg,horas,min,sec);
	cout<<"horas: "<<horas<<endl;
	cout<<"minutos: "<<min<<endl;
	cout<<"segundos: "<<sec<<endl;
	getch();
	return 0;
}

void tiempo(int _totalseg,int& _horas,int& _min,int& _sec){

	if(_totalseg>=3600){
		_horas-=_totalseg/60;
		_totalseg%=60;
	}	if(_totalseg>=60){
		_min-=_totalseg/60;
		_totalseg%=60;
	}
	_sec-=_totalseg;
}