//Switch Case (Generating Different Colors)
//Date: 11/15/2023
//Time: 12:51AM
#include<iostream>
#include<cmath>
using namespace std;
/// defines a function named color that takes an integer as an argument and returns a string
string color(int clr){
    //declares a string variable named cls
string cls;
// starts a switch statement that will execute different code blocks depending on the value of clr
switch (clr){
    case 1:
    cls = "red";
    break;

    case 2:
    cls = "yellow";
    break;

    case 3:
    cls = "blue";
    break;

    case 4:
    cls  = "pink";
    break;

    default:
    cls = "Wrong Number";
    break;

}return cls;


}


int main (){
    /* cout<<color(23)<<endl;*/
    //calls the function of switch case
cout<<color(5)<<endl;
    
    return 0;
}