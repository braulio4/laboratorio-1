#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


int main(){
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,suma=0;
	cout<<"ingrese 10 numeros: "; cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9>>num10;
	if(num1<=0){
		suma+=num1;
	}
	if(num2<=0){
		suma+=num2;
	}
	if(num3<=0){
		suma+=num3;
	}
	if(num4<=0){
		suma+=num4;
	}
	if(num5<=0){
		suma+=num5;
	}
	if(num6<=0){
		suma+=num6;
	}
	if(num7<=0){
		suma+=num7;
	}
	if(num8<=0){
		suma+=num8;
	}
	if(num9<=0){
		suma+=num9;
	}
	if(num10<=0){
		suma+=num10;
	}
	cout<<"la suma es: "<<suma<<endl;
	getch();
	return 0;
}