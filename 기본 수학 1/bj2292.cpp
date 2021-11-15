#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, count = 1, sum;

    cin>>x;

    if(x == 1){
        cout<<1;
        return 0;
    }
    while(1) {
        sum = 1;
        for(int i = 1 ; i <= count; i++) {
            sum += 6*i;
        }
        if(x > sum) {
            count++;
        }
        else
            break;
    }
    cout<<count+1;
    
    return 0;
}