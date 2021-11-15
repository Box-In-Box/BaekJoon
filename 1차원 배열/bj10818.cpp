#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int x, tmp, min, max;

    cin>>x;
    for(int i = 0; i < x; i++) {
        cin>>tmp;
        if(i == 0) {
            min = tmp;
            max = tmp;
        }
        if(tmp > max)
            max = tmp;
        if(tmp < min)
            min = tmp;
    }
    cout<<min<<" "<<max;
    
    return 0;
}