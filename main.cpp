#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL,"rus");
	double x,y,b,z;
	cout<<"¬ведите 3 числа"<<endl;
	cin>> x>>y>>b;
	if ((b-y)>0 && (b-x)>=0){
        z = log(b-y)*sqrt(b-x);
        cout<<z;
	}
	else{
        cout<<"Error";
	}
}
