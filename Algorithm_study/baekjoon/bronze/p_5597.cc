#include <iostream>
#include <queue>
#include <stack>
#include <tuple>
#include <deque>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int students[30] = {0};
    int num;
    for (int i=0; i<28;i++){
        cin >> num;
        students[num-1] = 1;
    }

    for(int j=0; j<30;j++){
        if (students[j]==0) cout << j+1 << "\n";
    }
    return 0;
}