#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int x;
    int alphabet[26];
    int first[26] = {0};
    char temp;

    std::fill_n(alphabet, 26, -1);

    cin>>str;

    for(int i = 0 ; i < str.size(); i++) {
        temp = str[i];
        x = (int)temp - 97;
        if(first[x] == 1)
            continue;
        alphabet[x] = i;
        first[x] = 1;
    }
    for(int i = 0; i < 26; i++) {
        cout<<alphabet[i]<<" ";
    }
    
    return 0;
}