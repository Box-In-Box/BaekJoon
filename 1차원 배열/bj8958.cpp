#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, score = 0, count = 1;
    string str;

    cin>>x;

    for(int i = 0; i < x; i++) {
        cin>>str;
        for(int j = 0; j < str.size(); j++) {
            if(str.at(j) == 'O') {
                score += count;
                count++;
            }
            else if(str.at(j) == 'X') {
                count = 1;
            }
        }
        cout<<score<<'\n';
        score = 0;
        count = 1;
    }

    return 0;
}