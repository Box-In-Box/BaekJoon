#include <iostream>
using namespace std;

int main() {
    int count, x , y;
    cin>>count;
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    for(int i = 0; i < count; i++) {
            cin>>x>>y;
            cout<<x+y<<"\n";
    }
    return 0;
}