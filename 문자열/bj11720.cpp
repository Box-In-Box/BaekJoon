#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, sum = 0;
    string str;
    string a;

    cin>>x;
    cin>>str;

    for(int i = 0; i < x; i++) {
        a = str[i];
        sum += stoi(a);
    }

    cout<<sum;
    return 0;
}