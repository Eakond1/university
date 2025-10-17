#Задание 1
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
    cout<<"Введите ширину и высоту прямоугольника"<<endl;
    cin>> x>>y;
    if (x>0&& y>0){
    cout<<"Площадь прямоугольника ";
    cout<<rectangle(x,y)<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }
    double c,d;
    cout<<"Введите основание и высоту треугольника"<<endl;
    cin>> c>>d;
    if (c>0&& d>0){
    cout<<"Площадь треугольника ";
    cout<<triangle(c,d)<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }
    double a,b;
    cout<<"Введите радиус круга"<<endl;
    cin>> a;
    if (a>0){
    cout<<"Площадь круга ";
    cout<<cicle(a)<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }
}
