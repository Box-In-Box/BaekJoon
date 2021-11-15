#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, k;
    int arr[3];

    cin>>x;

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < 3; j++) {
            cin>>arr[j];
        }
        k = 1;
        while(1) {
            if(arr[0]*k >= arr[2])
                break;
            k++;
        }
        if(k < 10)
            cout<<arr[2] - arr[0]*(k-1)<<0<<k<<'\n';
        else
            cout<<arr[2] - arr[0]*(k-1)<<k<<'\n';
    }

    return 0;
}