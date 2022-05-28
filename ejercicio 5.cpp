
#include <iostream> 
#include <iomanip>     

using namespace std;
int main () {
	double f;
	cout<<"ingrese un numero flotante: "; cin>>f;
	cout<<std::setprecision(2)<<f<< '\n';
  return 0;
}