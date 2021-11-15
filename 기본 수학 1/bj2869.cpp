#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x, y, z, temp, i = 1;

    cin>>x>>y>>z;

    z -= y;
    x -= y;

    i = z / x;
    if(z % x != 0)
        i++;
    
    printf("%d", i);
    return 0;
}