#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, count, temp;
    cin>>x;

    if(x % 5 == 0) {
        count = x / 5;
    }
    else {
        temp = x % 5;
        count = x / 5;

        if(temp % 3 == 0)
            count ++;
        else {
            count = 0;

            int i = 1;

            if(3 + 5 > x)
                count = -1;

            while(3*i + 5 <= x) {
                if((x - 3*i) % 5 == 0) {
                    count = i + (x - 3*i) / 5;
                    break;
                }   
                else
                    count = -1;
                i++;
            }
            if(count == -1 && x % 3 == 0)
                count = x / 3;
            else 
                count  -1;
        }
    }
    cout<<count;
    
    return 0;
}