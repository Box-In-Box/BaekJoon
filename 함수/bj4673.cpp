#include <iostream>
#include <vector>
using namespace std;

int selfNumber(int num) {
    int result = num;

    while(num > 0) {
        result += num%10;
        num/=10;
    }
    return result;
}
int main() {
    vector<int> arr(10000);
    int x;

    for(int i = 1; i < arr.size(); i++) {
        int x = selfNumber(i);
        if(x < 10000)
            arr[x] = 1;
    }
    for(int i = 1; i <= arr.size(); i++) {
        if(arr[i - 1] != 1) {
            if(i - 1 == 0)
                continue;
            cout<<i - 1<<'\n';
        }
            
    }
    return 0;
}