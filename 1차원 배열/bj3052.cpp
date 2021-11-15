#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[10];
    int result[10];
    int count = 10;

    for(int i = 0; i < 10; i++) {
        cin>>arr[i];
        result[i] = arr[i] % 42;
    }

    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(result[i] == result[j]) {
                count--;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}