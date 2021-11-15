#include <iostream>
using namespace std;
int  arithmeticSequence(int x) {
    int count = x;
    for(int i = 1; i <= x; i++) {
        int value = i, index = 0, temp;
        int arr[4] ={0};

        while(value > 0) {
            arr[index++] = value%10;
            value/=10;
        }

        temp = arr[0] - arr[1];
        for(int j = 0; j < index - 1; j++) {
            if(temp != arr[j] - arr[j+1]) {
                count--;
                break;
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin>>x;

    cout<<arithmeticSequence(x);

    return 0;
}