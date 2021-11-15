#include <iostream>
using namespace std;

int main() {
    int x, temp, count = 0;
    int a, b;
    cin>>x;

    if(x < 10) {
        a = 0;
        b = x;
    }
    else {
        a = x / 10;
        b = x % 10;
    }

    while(1) {
        temp = a+b;
        
        if(temp >= 10) {
            temp %= 10;
        }

        temp = (b*10)+temp;
        a = temp / 10;
        b = temp % 10;
        count++;
        if(a == x/10 && b == x%10)
            break;
    }
    cout<<count;
    
    return 0;
}