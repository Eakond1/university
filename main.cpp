#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL,"rus");
    int t11=3,t12=4,t21=4,t22=2;
    int matrix1[t11][t12]{
    {5,2,0,10},
    {3,5,2,5},
    {20,0,0,0}
    };
    double matrix2[t21][t22]{
        {1.2,0.5},
        {2.8,0.4},
        {5,1},
        {2,1.5}
    };
    double matrix3[t11][t22]={0};
    double res;
    int kol=0;
 for(int i = 0; i < t11; i++) {
        for(int j = 0; j < t22; j++) {
            for(int k = 0; k < t12 ; k++) {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    double maxi = -1000,mini=1000, prodm,prodmi;
    for(int i = 0; i < 3;i++){
        if (maxi< (matrix3[i][0]+ matrix3[i][1])){
            maxi = matrix3[i][0]+ matrix3[i][1];
            prodm = i;
        }
         if (mini > (matrix3[i][0]+ matrix3[i][1])){
            mini = matrix3[i][0] + matrix3[i][1];
            prodmi=i;
        }
    }
cout<<"Продавец, заработавший больше всего денег "<< maxi<<" - "<<prodm+1<<endl;
cout<<"Продавец, заработавший меньше всего денег "<< mini<<" - "<< prodmi+1<<endl;
double minkom=1000,maxkom=-1000;
for(int i = 0; i < 3;i++){
        if (minkom> matrix3[i][1]){
                minkom = matrix3[i][1];
                prodmi = i;
        }
        if (maxkom < matrix3[i][1]){
                maxkom = matrix3[i][1];
                prodm = i;
        }
    }
    cout<<"Продавец, заработавший больше всего коммисионных "<< maxkom<<" - "<<prodm+1<<endl;
    cout<<"Продавец, заработавший меньше всего коммисионных "<< minkom<<" - "<< prodmi+1<<endl;
    double summa=0,ress=0,summi=0;
    for (int i = 0; i<3;i++){
        summa += matrix3[i][0];
    }
    cout<<"Общая выручка "<<summa<<endl;
    for (int i = 0; i<3;i++){
        ress += matrix3[i][1];
    }
    cout<<"Общая сумма комиссионных "<<ress<<endl;
    for (int i = 0; i<3;i++){
        summi+=(matrix3[i][0]+matrix3[i][1]);
    }
    cout<<"Общая сумма денег, прошедшая через руки продавцов "<< summi;
    return 0;
}

