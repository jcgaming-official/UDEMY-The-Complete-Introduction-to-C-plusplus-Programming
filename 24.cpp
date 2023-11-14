//Understanding loops part 2
//Date: 11/15/2023
//Time: 12:13AM
#include<iostream>
#include<cmath>
using namespace std;

int main (){
    //ask the user to create a password
    cout<<"Create a password: "<<endl;
    string pass;
    getline(cin,pass);
    //ask the user to enter the password
    cout<<"What is your password?: "<<endl;
    string i;
    getline (cin,i);
    //using while loop to check if the password is incorrect
    while(i != pass){
        cout<<"Wrong password, try again: "<<endl;
        getline(cin,i);
    }
    //print out the ouput if the password is correct
    cout<<"Password correct! you may now continue"<<endl;

    return 0;
}