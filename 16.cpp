//Working with multiple function Part 2
#include <iostream>
#include <cmath>
using namespace std;

int add(int a, int b, int c){
    cout<< a+b+c<<endl;
    cout<< a-b-c<<endl;
    cout<<a*b*c<<endl;
    cout<<a/b/c<<endl;
}

int main(){
    //add(5, 5, 10);
 //this can be assign values
    /*int var1 = 5;
    int var2  = 10;
    int var3 = 15;
    add(var1,var2,var3); */

// User can enter the values from other function
    int var1;
    cout <<"Enter value for var1: "<<endl;
    cin >> var1;
    int var2;
    cout <<"Enter value for var2: "<<endl;
    cin >> var2;
    int var3;
    cout<<"Enter value for var3l"<<endl;
    cin >>var3;

    add(var1,var2,var3);
    return 0;
}