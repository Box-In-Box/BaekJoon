#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[2];
    int tempArr[3];

    cin>>arr[0]>>arr[1];

    for(int i = 0; i < 2; i++) {
        int temp = arr[i];
        int index = 0;
        while(temp > 0) {
            tempArr[index++] = temp % 10;
            temp /= 10;
        }
        arr[i] = 0;
        arr[i] += tempArr[0]*100;
        arr[i] += tempArr[1]*10;
        arr[i] += tempArr[2];
    }
    
    arr[0] > arr[1] ? cout<<arr[0] : cout<<arr[1];
    return 0;
}