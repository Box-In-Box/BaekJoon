#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin>>x;
    cin>>y;
    z = x*y;
    cout<<x*(y%10)<<endl;
    cout<<x*((y/=10)%10)<<endl;
    cout<<x*(y/=10)<<endl;
    cout<<z;
    return 0;
}