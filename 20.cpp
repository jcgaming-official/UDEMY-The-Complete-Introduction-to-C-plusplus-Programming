//Understanding IF function Part 2
// Date nov 9 2023
//8:00 pm

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // to print and ask the user
    cout<<"Do you love to code? " <<endl;
    //to make a variable for user input of code
    string code;
    //to get the user input
    getline(cin , code);
    // to print and ask the user
    cout<<"Do you love to read books? "<<endl;
    //to make a variable for user input of books
    string books;
    //to get the user input
    getline(cin , books);

    //if the user input is both yes and it will print the statement
    if(code=="yes" && books == "yes"){
        //to print the statement
        cout<<"Wow you love both!"<<endl;
        //else if the user input is yes for code and no for books and it will print the statement
    }else if (code=="yes" && books !="yes"){
        //to print the statement
        cout<<"You only love to code"<<endl;
        //else if the user input is no for code and yes for books and it will print the statement
    }else if(code!="yes" && books=="yes"){
        //to print the statement
        cout<<"you only love to read books"<<endl;
        //else if the user input is both no and it will print the statement
    }else{
        // to print the statement
        cout<<"You don't love both"<<endl;
    }

}