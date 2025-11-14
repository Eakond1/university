#include <iostream>
#include <string>
#include <fstream>
using namespace std;
double avarageHeight(double height, int numberOfStudents){
    double avarage;
    avarage = height/numberOfStudents;
    return avarage;
}
int main(){
    setlocale(LC_ALL,"rus");
    int numberOfStudents;
    double height;
    cout<<"Введите количество учеников в классе ";
    cin>>numberOfStudents;
    cout<<"";
    double allHeights[numberOfStudents];
    int i = 0;
    cout<<"Введите рост учеников ";
    while (i < numberOfStudents){
        cin >> allHeights[i];
        i++;
    }
    double summ = 0;
    for (i =0; i < numberOfStudents; ++i)
    {
        summ+= allHeights[i];
    }
    double avarage  = avarageHeight(summ,numberOfStudents);
    int aboveAvarage=0;
    for (i =0; i < numberOfStudents; ++i)
    {
        if(allHeights[i] > avarage){
            aboveAvarage++;
        }
    }
    cout<<"Количество учеников, чей рост выше, чем средний " << aboveAvarage<<endl;
    int numberOfPair=0;
    for(int i=0; i<numberOfStudents; i++){
        for(int j = 1; j< numberOfStudents-1;j++){
            if (allHeights[i] == allHeights[j] && i!=j){
                    cout<<allHeights[i]<< " "<< allHeights[j]<<" ";
                numberOfPair++;
            }
        }
    }
    cout<<numberOfPair;
    return 0;
}
