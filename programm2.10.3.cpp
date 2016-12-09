#include <iostream>
#include <math.h>
using namespace std;

//Вычислить значение выражения y=f(x) при заданном значении x

int main(){
	int y, x;
	const double pi = 3.141592653589793;
	cout<<"Введите x: "<<endl;
	cin>>x;
	y = fabs((x^4) - cos(x)) - pow(1 + (pow(x^6, 1/2)), 1/9) + pow (sin(pi / (exp(x)+1)), 3);
	cout<<"Ответ: "<<y<<endl;
	return 0;
}
	
