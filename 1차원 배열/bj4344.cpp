#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int caseNum, studentNum, count = 0;
    int score[1000];
    double average = 0;
    
    cin>>caseNum;
    for(int i = 0; i < caseNum; i++) {
        cin>>studentNum;
        for(int j = 0; j < studentNum; j++) {
            cin>>score[j];
            average += score[j];
        }
        average /= studentNum;

        for(int j = 0; j < studentNum; j++) {
            if(score[j] > average)
                count++;
        }
        average = (double)count / studentNum * 100;
        cout<<fixed;
        cout.precision(3);
        cout<<average<<'%'<<'\n';

        count = 0;
        average = 0;
    }

    return 0;
}