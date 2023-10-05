#include <iostream>
using namespace std;

int main(){
    cout<<"What do you want to do?"<<endl;
    string a;
    getline(cin,a);
    cout<<"How much hours do you want to spend?"<<endl;
    int b;
    cin>>b;
    cout<<"Do you want to do is " <<a<<" and you want to spend "<<b<<" hour(s)"<<endl;
    return 0;
}