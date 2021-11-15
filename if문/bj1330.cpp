#include <iostream>
using namespace std;

int main() {
    int x, y;
    char z;

    cin>>x>>y;
    if(x > y)
        z = '>';
    else if(x < y)
        z = '<';
    else
        z = '=';
    
    if (z == '=')
        cout<<z;
    cout<<z;
    
    return 0;
}