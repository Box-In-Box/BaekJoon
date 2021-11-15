#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int> &a) {
    long long ans = 0;
    for(int i = 0; i < a.size(); i++) {
        ans += a[i];
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr;
    int x, y;

    cin>>x;
    for(int i = 0; i < x; i++) {
        cin>>y;
        arr.push_back(y);
    }
    long long result = sum(arr);
    cout<<result;
    return 0;
}