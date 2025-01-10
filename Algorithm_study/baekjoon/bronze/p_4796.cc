#include <iostream>
#include <queue>
#include <stack>
#include <tuple>
#include <deque>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int L, P, V;
    int cnt = 1;

    while (1){
        int result = 0;
        cin >> L >> P >> V;
        if (L==0 && P==0 && V==0) break;

        result += (V/P)*L;
        
        V%=P;

        if (V>L) V=L;
        result += V;

        cout << "Case " << cnt << ": " << result << "\n";
        cnt++;
    }
    return 0;
}