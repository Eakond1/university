#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n){
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
double summaDrobey(int k){
    double droby=0.0;
    for (double i=1; i<=k; i++){
        droby = droby + (1.0/i);
    }
    return droby;
}
int main(){
    setlocale(LC_ALL,"rus");
    int n,k;
    double summa=0.0;
    cin>>n;
    for(int k=1; k<=n;k++){
        summa+= (factorial(k)/pow(summaDrobey(k),k));

    }
    cout<<summa;
    return 0;
}

