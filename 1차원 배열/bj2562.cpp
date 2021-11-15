#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    int arr[9];
    int max,index;

    for(int i = 0 ; i < sizeof(arr)/sizeof(int); i++) {
        cin>>arr[i];
        if(i == 0) {
            max = arr[i];
            index = i;
        }
        else {
            if(arr[i] > arr[index]) {
                max = arr[i];
                index = i;
            }      
        }
    }
    cout<<max<<'\n'<<index+1;
    return 0;
}