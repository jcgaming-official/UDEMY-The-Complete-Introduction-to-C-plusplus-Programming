#include<iostream>
using namespace std;

int main() {
    int myArray[] = {2,7,8,13,5,9};
    int n;
    bool search= false;

    cout << "Choose number: ";
    cin >> n;

    for(int i = 0; i < sizeof(myArray)/sizeof(myArray[0]); i++) {
        if(myArray[i] == n) {
            search = true;
            cout << "Index " << n << " is: " << i << endl;
            break;
        }
    }

    if(!search)
        cout << n << " not found" << endl;

    return 0;
}