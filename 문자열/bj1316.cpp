#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, result;
    int iscontinue[26];
    string str;

    cin>>x;
    result = x;

    for(int i = 0; i < x; i++) {
        cin>>str;
        
        fill_n(iscontinue, 26, 0);
        
        for(int j =  0; j < str.size(); j++) {
            int temp = (int)str[j] - 97;

            if(iscontinue[temp] == 1) {
                result--;
                break;
            }
            if(temp != (int)str[j + 1] - 97)
                iscontinue[temp] = 1;

        }
    }
    cout<<result;

    return 0;
}