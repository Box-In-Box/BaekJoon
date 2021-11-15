#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int sum = 0;

    cin>>str;

    for(int i = 0; i < str.size(); i++) {
        if((int)str[i] >= 'W')
            sum += 10;
        else if((int)str[i] >= 'T')
            sum += 9;
        else if((int)str[i] >= 'P')
            sum += 8;
        else if((int)str[i] >= 'M')
            sum += 7;
        else if((int)str[i] >= 'J')
            sum += 6;
        else if((int)str[i] >= 'G')
            sum += 5;
        else if((int)str[i] >= 'D')
            sum += 4;
        else if((int)str[i] >= 'A')
            sum += 3;
    }
    cout<<sum;
    
    return 0;
}