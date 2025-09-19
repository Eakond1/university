#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    cout<<"Ââåäèòå 3 ÷èñëà"<<endl;
    double x,y,b,z;
    cin>>x>>y>>b;
    if ((b-y)>0 && (b-x)>=0){
        z = log(b-y)*sqrt(b-x);
        cout<<z;
    }
    else{
        cout<<"Error";
    }
    return 0;
}


