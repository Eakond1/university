#include <iostream>
using namespace std;
double rectangle(double leng, double high){
    double S;
    S = leng*high;
    return S;
}
double triangle(double base, double high){
    double S;
    S = 0.5*base*high;
    return S;
}
double cicle(double r){
    double S;
    S = 3.14*r*r;
    return S;
}

int main () {
    setlocale(LC_ALL,"rus");
    double x,y;
    cout<<"������� ������ � ������ ��������������"<<endl;
    cin>> x>>y;
    if (x>0&& y>0){
    cout<<"������� �������������� ";
    cout<<rectangle(x,y)<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }
    double c,d;
    cout<<"������� ��������� � ������ ������������"<<endl;
    cin>> c>>d;
    if (c>0&& d>0){
    cout<<"������� ������������ ";
    cout<<triangle(c,d)<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }
    double a,b;
    cout<<"������� ������ �����"<<endl;
    cin>> a;
    if (a>0){
    cout<<"������� ����� ";
    cout<<cicle(a)<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }
}
