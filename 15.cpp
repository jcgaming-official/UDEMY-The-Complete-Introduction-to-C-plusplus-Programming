#include <iostream>
using namespace std;

int carx(){
    string cars[2]={};
    cars [0] = "Lamborghini}";
    cars [1]="Supra";

    int qtCars[3]={};
    qtCars[0]=4;
    qtCars[1]=6;
    qtCars[2]=10;

    cout << qtCars[0] + qtCars[1] + qtCars[2]<<endl;
   
}

int main (){
    cout<<"The total Cars is:"<<endl;
    carx();
    return 0;
}