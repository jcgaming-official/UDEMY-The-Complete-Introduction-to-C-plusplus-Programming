//array part 2
#include<iostream>
using namespace std;

int main(){
    string food []={"Pizza","Burger","Fries","Chocolate","Ice Cream"};
    string drink [7]={};
    drink[0]="Juice";
    drink[3]="Water";
    drink[5]="Beer";
    cout<<"Enter your drink#1: "<<endl;
    getline(cin,drink[1]);
    cout<<"Enter your drink#2: "<<endl;
    getline(cin,drink[2]);
    cout<<"Enter your drink#4: "<<endl;
    getline(cin,drink[4]);

    cout<<drink[0]<<endl;
    cout<<drink[1]<<endl;
    cout<<drink[2]<<endl;
    cout<<drink[3]<<endl;
    cout<<drink[4]<<endl;
    cout<<drink[5]<<endl;
    return 0;
}