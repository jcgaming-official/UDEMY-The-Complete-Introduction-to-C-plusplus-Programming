#include <iostream>
#include <cmath>
using namespace std;

int main (){
    string des="Ice cream";
    int rkm = 5;
    int cst = 10;
    int val = 400;
    int val2 = 500;
    cout <<"Hello Shen" << endl;
    cout <<"You ate " << des << " that cost you for "<<max(rkm, cst)<< " dollars and you also run for " <<min(rkm, cst)<<"km" << endl;    
    cout << "you burned calories for " <<max(cst, val)<< " and you also gained "<<max(val,val2)<< " calories"<<endl;
    cout<<"Your calories intake are "<< val2-val<<" total"<<endl;
    return 0;
}