#include <iostream>
using namespace std;

int main() {
    int hour, min;

    cin>>hour>>min;

    if(min < 45) {
        if(hour < 1)
            hour = 23;
        else
            hour--;
        min+=15;
    }
    else
        min-=45;
    cout<<hour<<" "<<min;
        
    return 0;
}