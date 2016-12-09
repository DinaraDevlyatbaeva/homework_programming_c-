#include <iostream>
#include <math.h>
using namespace std;

/* Даны вещественные числа x и y. Определить, принадлежит ли точка 
с координатами (x; y) заштрихованной области */

int main(){
	float x, y;
	cout<<"Введите значение абсциссы x:"<<endl;
	cin>>x;
	cout<<"Введите значение ординаты у:"<<endl;
	cin>>y;
	if(y<=fabs(-x+2) && y>=fabs(x-2))
		cout<<"Точка принадлежит данной области"<<endl;
	else
		cout<<"Точка не принадлежит данной области"<<endl;
	return 0;
}
