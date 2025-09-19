#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    cout<<"Ââåäèòå ñóììó çàéìà, íà ñêîëüêî ëåò áåðåòå, ìåñÿ÷íûé ïëàòåæ"<<endl;
    double S,p,n,m,r,ch;
    cin>>S>>n>>m;
    if (S>0 && m>0 && n>0){
    for (p=0; p<=100; p++){
        r = p/100;
        if ((12*((pow(1+r,n))-1))>0 && r!=-1 && p >= 0){
            ch = S*r*pow(1+r,n)/(12*((pow(1+r,n))-1));
            if (ch>m) {
                cout<<p;
                break;
            }
        }
    }
    }
    else{
        cout<<"Error";
    }

}

