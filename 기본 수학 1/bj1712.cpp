#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z, money, count;

    cin>>x>>y>>z;
    if(y >= z) {
        cout<<-1;
        return 0;
    }
    money = (x+z)-(x+y);
    count = x/money;
    cout<<count+1;
    
    return 0;
}