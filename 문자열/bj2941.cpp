#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int count = 0;
    int pass = 0;

    cin>>str;

    for(int i = 0; i < str.size(); i++) {
        if(pass != 0){
            pass--;
            continue;
        }
        else {
            count++;
        }

        if(str[i] == 'd'&& str[i + 1] == 'z' && str[i + 2] == '=') {
            //cout<<str[i]<<str[i + 1]<<str[i + 2]<<" ";
            pass = 2;
        }
        else if(str[i] == 'l'&& str[i + 1] == 'j' || str[i] == 'n'&& str[i + 1] == 'j') {
            //cout<<str[i]<<str[i + 1]<<" ";
            pass = 1;
        }
        else if(str[i + 1] == '=' || str[i + 1] == '-') {
            //cout<<str[i]<<str[i + 1]<<" ";
            pass = 1;
        }
        else {
            //cout<<str[i]<<" ";
        }
    }
    cout<<count;

    return 0;
}