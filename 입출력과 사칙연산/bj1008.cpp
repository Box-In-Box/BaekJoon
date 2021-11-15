#include <iostream>
using namespace std;

int main() {
    int x, y;
    double z;
    cin>>x>>y;
    z = (double)x/(double)y;
    cout.precision(10);
    cout<<z;
    return 0;
}