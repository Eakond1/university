#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    double x,y;
    for (x = -4; x<5; x=x+0.5){
            if (x!=1){
                y = (x*x + 2*x+2)/(x-1);
                cout<<y<<" ";
            }
    }
}

