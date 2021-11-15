#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;

    while(1) {
        cin>>x>>y;
        if(x == 0 && y == 0)
            break;
        
        cout<<x+y<<"\n";
    }
    
    return 0;
}