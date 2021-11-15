#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, max = 0;
    int arr[1000];
    double sum = 0, result;
    cin>>x;
    for(int i = 0; i < x; i++) {
        cin>>arr[i];
       
        if(max < arr[i])
            max = arr[i];
        sum += arr[i];
    }

    result = (sum / max * 100) / x;
    cout<<fixed;
    cout.precision(6);
    cout<<result;

    return 0;
}