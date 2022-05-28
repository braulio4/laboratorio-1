#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


int main(){
	int num1,media=0,i;
	float suma=0;
	while(num1!=0){
		cout<<"ingrese un numero: "; cin>>num1;
		suma+=num1;
		if(num1!=0){
			i+=1;
		}	
	}
	cout<<"la media es: "<<suma/i<<endl;
	getch();
	return 0;
}