//Understanding the IF Function Part 1
#include <iostream>
using namespace std;

int main(){
    string text1="Test";
    int var2 = 2;
    int var3 = 5;
    //If the text1 is equal to test, the first condition will be execute
    if (text1 == "test"){
        cout<<"It's equal"<<endl;
    }else{
        cout<<"It's not equal"<<endl;

    }
    //If the text1 and var2 is equal. then the first condition will be execute
    if(text1 == "Test" && var2 > 1){
        cout<<"Nice"<<endl;
    }else {
        cout<<"bad"<<endl;
    }
    // If the 1 condition or 2 condition are met, the code will be execute
    if(text1 == "Tesst" || var2 > 1){
        cout<<"Nice"<<endl;
    }else {
        cout<<"bad"<<endl;
    }
    // if text 1 is equal to Test and if var2 is greater than 1 or var 3 is smaller than 2, the code  will be execute
    if(text1 == "Test" && var2 > 1 || var3 < 2){
        cout<<"True"<<endl;
    }else {
        cout<<"False"<<endl;
    }
}