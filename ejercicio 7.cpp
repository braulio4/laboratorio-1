#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


int main(){
	int num1,num2,divisor;
	cout<<"ingrese numero 1: "; cin>>num1;
	cout<<"ingrese numero 2: "; cin>>num2;
	if(num1%num2==0){
		cout<<"el numero "<<num2<<" es divisor de "<<num1<<endl;
	}
	else{
		cout<<"el numero "<<num2<<" no es divisor de "<<num1<<endl;
	}
	cout<<endl;
	if(num2%num1==0){
		cout<<"el numero "<<num1<<" es divisor de "<<num2<<endl;
	}
	else{
		cout<<"el numero "<<num1<<" no es divisor de "<<num2<<endl;
	}
	getch();
	return 0;
}