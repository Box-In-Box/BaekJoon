#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int count = 0;
    
    getline(cin, str);

    for(int i = 0; i < str.size(); i ++) {
        if(str[i] == ' ')
            count++;
    }

    if(str[0] == ' ')
        count--;
    if(str[str.size() - 1] == ' ')
        count--;

    if(str.empty())
        cout<<0;
    else
        cout<<count+1;
    
    return 0;
}