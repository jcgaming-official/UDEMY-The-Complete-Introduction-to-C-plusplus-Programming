//Creating a Coffee Selector using IF ELSE
//Date: 11/14/2023
//Time: 4:09PM

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double price = 140.43;
    double bal;
    cout<<"Do you want to take a coffee? "<<endl;
    string a1;
    getline(cin , a1);
    cout<<"Enter your balance: "<<endl;
    cin>>bal;

    if(a1 == "yes"&& bal >= price) {
        cout<<"Here is your coffee. Enjoy!"<<endl;
        cout<<"Your new balance is "<< bal - price<<endl;
    }else if (a1 == "yes" && bal < price){
        cout<<"Sorry, You don't have enough money to buy a coffee";
    }else{cout<<"Have a Good Day!"<<endl;}

    return 0;

}