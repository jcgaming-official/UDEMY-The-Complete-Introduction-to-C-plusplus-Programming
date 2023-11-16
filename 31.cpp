//Final Project Part 5
//Date: 11/16/2023
//Time: 8:01AM
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
        cout<<"Welcome to the Shopee!"<<endl;

        //user balance
        double userBalance = 200.00;
        //ask the user if user wants to add more balance
        cout<<"Do you want to add balance? "<<endl;
        //variable for user input from adding balance
        string q1;
        //store the user input
        getline(cin, q1);
    //if q1 is equal to yes then it will ask to how much balance to add
        if(q1 == "yes"){
            cout<<"Enter your balance to add: "<<endl;
            double addBalance;
            cin>>addBalance;
            double totalBalance = userBalance + addBalance;
            cin.ignore();
            cout<<"Your new balance is "<<totalBalance<<endl;
            userBalance = totalBalance;
        }
        //else it will not add the balance
        else{
            cout<<"Alright"<<endl;
        }


        //ask the user if user wants to shop
        cout<<"Would you like to shop now? "<<endl;
        string q2;
        getline(cin, q2);
        //if the user answer is yes
        if(q2 == "yes"){
            cout<<"Available items: "<<endl;
            //created array for items and prices
            string items[]={"Laptop", "Cellphone","Nintendo Switch"};
            double itemPrices[]={250.00, 350.00, 100.00};

            cout<<"1. "<<items[0]<<" price: "<<itemPrices[0]<<endl;
            cout<<"1. "<<items[1]<<" price: "<<itemPrices[1]<<endl;
            cout<<"1. "<<items[2]<<" price: "<<itemPrices[2]<<endl;
            
            //ask the user if what choice user to pick
            cout<<"Your choice: "<<endl;
            string q3;
            getline(cin, q3);

            // if invalid userinput
            while(q3>"3" || q3 <"1"){
                cout<<"Invalid input, Please try again: "<<endl;
                getline(cin , q3);
            }
            //order 1
            if (q3=="1"){
                cout<<"You ordered "<<items[0]<<" for "<<itemPrices[0]<<" pesos"<<endl;
                cout<<"Your total balance is "<<userBalance - itemPrices[0]<<endl;
            }
            //order 2
            else if (q3=="2"){
                cout<<"You ordered "<<items[1]<<" for "<<itemPrices[1]<<" pesos"<<endl;
                cout<<"Your total balance is "<<userBalance - itemPrices[1]<<endl;
            }
            //order 3
            else if (q3=="3"){
                cout<<"You ordered "<<items[2]<<" for "<<itemPrices[2]<<" pesos"<<endl;
                cout<<"Your total balance is "<<userBalance - itemPrices[1]<<endl;
            }

        }
        //if user don't want to shop
        else {
            cout<<"Alright. Have a good day!"<<endl;
        }

    return 0;
}