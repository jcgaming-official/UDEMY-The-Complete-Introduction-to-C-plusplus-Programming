#include <iostream>
using namespace std;

int main(){
    double a = 43;
    double b = 2.6;
    double c = 54.82;
    double d = 433.34;
    double add = a-b;
    double mul = b*c;
    double all = a+b*d/c+(b+c)/b*(a+b+c)/c;

    cout<<add << endl;
    cout<<all<< endl;
    return 0;
}