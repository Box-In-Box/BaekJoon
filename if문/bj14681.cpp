#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    cin>>x;
    cin>>y;

    x > 0 ? x = 1 : x = 2;
    y > 0 ? y = 0 : y = 3;

    if(x == 2 && y == 3)
        x = 0;
    cout<<x+y;
    return 0;
}