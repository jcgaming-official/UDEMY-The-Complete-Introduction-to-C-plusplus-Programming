#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a = 43;
    double b = 2.6;
    double c = 54.82;
    double d = 433.34;
    double add = a-b;
    double mul = b*c;
    double all = a+b*d/c+(b+c)/b*(a+b+c)/c;

    double rnd= round(all);
    double hrn = ceil(all);
    double lrn = floor(all);
    double op1 =min(a,b);
    double pwr = pow(a,3);
    double sqr= sqrt(a);

    cout<<op1<< endl;
    cout<<rnd<< endl;
    cout<<hrn<<endl;
    cout<<lrn<<endl;
    cout<<all<< endl;
    cout<<pwr<<endl;
    cout<<sqr<<endl;
    return 0;
}