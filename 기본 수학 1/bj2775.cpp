#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;

    cin>>x;
    for(int i = 0 ; i < x; i++) {
        int k, n, result = 0, temp;
        int j, q;
        int arr[15][15];
        cin>>k>>n;

        if(k == 0) {
            result = n;
        }
        else {
            for(j = 0; j < k+1; j++) {
                for(q = 0; q < n; q++) {
                    if(j == 0) {
                        arr[j][q] = q+1;
                    }
                    else {
                        if(q == 0)
                            arr[j][q] = 1;
                        else {
                            arr[j][q] = arr[j-1][q] + arr[j][q-1];
                        }
                    }
                    //cout<<arr[j][q]<<" ";
                }
                //cout<<"\n";
            }
            result = arr[--j][--q];
        }
        cout<<result<<'\n';
    } 
    return 0;
}