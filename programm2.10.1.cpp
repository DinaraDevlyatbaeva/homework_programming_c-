#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float d, S, P;
    cout<<"Диагональ:"<<endl;
    cin>>d;
    S=pow(d,2)/2;
    P=2*sqrt(2)*d;
    cout<<"Периметр квадрата: "<<P<<", площадь: "<<S<<endl;
    return 0;
}

