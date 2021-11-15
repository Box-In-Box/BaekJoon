#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, r;
    string str;
    
    cin>>x;

    for(int i = 0; i < x; i++) {
        cin>>r>>str;

        for(int j = 0; j < str.size(); j++) {
            for(int k = 0; k < r; k++) {
                cout<<str[j];
            }
        }
        cout<<'\n';
    }

    return 0;
}