#include <iostream>
using namespace std;

int main() {
    int count, x, y;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>count;

    for(int i = 1; i <= count; i++) {
        cin>>x>>y;
        cout<<"Case #"<<i<<": "<<x+y<<"\n";
    }
    return 0;
}