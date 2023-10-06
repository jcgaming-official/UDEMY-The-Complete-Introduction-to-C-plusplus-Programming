#include <iostream>
using namespace std;
#include <cmath>

int main(){
    cout<<"What food do you want to order?"<<endl;
    string a1;
    getline(cin,a1);
    cout<<"What drink do you want to order"<<endl;
    string a2;
    getline(cin,a2);
    cout<<"What is the price of the food?"<<endl;
    double a3;
    cin>>a3;
    cout<<"What is the price of the drink?"<<endl;
    double a4;
    cin>>a4;
    cout<<"How much tip do you want to give?"<<endl;
    double a5;
    cin>>a5;
    double a6 = a3+a4+a5;
    cout<<"You want to order "<< a1<<" and "<<a2<<" and leave a tip for "<<a5<<" dollars. The total of money cost is "<<a6<<" dollars"<<endl;
    cout<<"Thank you for your order! Have a nice day!"<<endl;
    return 0;
}