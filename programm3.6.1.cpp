#include <iostream>
#include <math.h>
using namespace std;

/* Дано вещественное число a. Для функции y = f (x), график которой 
приведён ниже, вычислить f (a) */

int main(){
	float a, y;
	cout<<"Ведите значение координаты a:"<<endl;
	cin>>a;
	if (a<-3 || a>3) y=3;
	else y=fabs(-a+3);
	cout<<"f(a)="<<y<<endl;
	return 0;
}
