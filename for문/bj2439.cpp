#include <iostream>
using namespace std;

int main() {
    int x;

    cin>>x;

    for(int i = 1; i <= x; i++) {
        for(int j = x-i; j >= 1; j--) {
            cout<<" ";
        }
        for(int j = 1; j <= i; j++) {
            cout<<"*";
        } 
        cout<<"\n";  
    }
    return 0;
}