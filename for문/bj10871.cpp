#include <iostream>
using namespace std;

int main() {
    int x, y, num;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>y;
    for(int i = 0; i < x; i++) {
        cin>>num;
        if(num < y)
            cout<<num<<" ";
    }
    
    return 0;
}