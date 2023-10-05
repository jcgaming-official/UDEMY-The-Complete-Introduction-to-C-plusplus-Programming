#include <iostream>
using namespace std;

int main(){
    string text ="Guess how much the length of this sentence";
    double count = text.max_size();
    int find1 = text.find("much");

    text.clear();

    cout << count << endl;
    cout << find1<< endl;
    text [10]='s';
    cout << text  <<endl;
    return 0;
}