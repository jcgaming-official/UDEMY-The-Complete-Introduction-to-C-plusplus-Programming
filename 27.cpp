//Final Project Part 1
//Date: 11/16/2023
//Time: 5:23AM
#include <iostream>
#include <cmath>
using namespace std;

int main (){
    cout<<"Welcome to the shopee!"<<endl;
    cout<<"Create a new account"<<endl;
    cout<<"Enter your username: "<<endl;
    string userName;
    getline(cin, userName);
    cout<<"Enter your password: "<<endl;
    string passWord;
    getline(cin, passWord);

    cout<<"Created a new account succesfully!"<<endl;
    //ask the user to create a username
    cout<<"Enter your username: "<<endl;
    //created a variable for username from user input
    string userEnter;
    //store the username data
    getline(cin, userEnter);
    //ask the user to create a password
    cout<<"Enter your password"<<endl;
    string passEnter;
    getline (cin, passEnter);
// if the username or password is incorrect
    while (userName != userEnter || passWord != passEnter){
        cout<<"Username or Password is incorrect. Please try again"<<endl;
        //ask the user to enter the username again
        cout<<"Enter username: "<<endl;
        getline(cin, userEnter);
        //ask the user to enter the password again
        cout<<"Enter your password: "<<endl;
        getline(cin,passEnter);
    }
    //if user succesfully logged in
        cout<<"Log in Succesfully!"<<endl;

    return 0;
}