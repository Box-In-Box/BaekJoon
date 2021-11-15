#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z, result;
    int arr[10] = {0};

    cin>>x;
    cin>>y;
    cin>>z;
    
    result = x*y*z;

    while(result != 0) {
        int digit = result % 10;
        arr[digit] += 1;
        result /= 10;
    }

    for(int i = 0; i < 10; i++) {
        cout<<arr[i]<<'\n';
    }

    return 0;
}