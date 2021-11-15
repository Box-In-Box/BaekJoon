#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int count[26] = {0};
    int max = -1, index;
    bool isSame = false;

    cin>>str;

    for(int i = 0 ; i < str.size(); i++) {
        if(str[i] >= 97) {  //¼Ò¹®ÀÚ
            count[str[i]-97] += 1;
        }
        else {
            count[str[i]-65] += 1; 
        }
    }

    for(int i = 0; i < 26; i++) {
        if(count[i] > max) {
            max = count[i];
            index = i;
            isSame = false;
        }
        else if(count[i] == max) {
            isSame = true;
        }
    }
    
    if(isSame)
        cout<<'?';
    else {
        char result = index+65;
        cout<<result;
    }
    
    return 0;
}