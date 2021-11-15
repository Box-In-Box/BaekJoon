#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;

    cin>>x;

    int i = 1;

    while(x > i) {
        x -= i;
        i++;
    }

    int y = i-(x-1);

    if(i % 2 == 0) {
        printf("%d/%d", x, y);
    }
    else {
        printf("%d/%d", y, x);
    }
    return 0;
}
