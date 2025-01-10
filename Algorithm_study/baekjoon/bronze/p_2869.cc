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

    int A, B, V;
    cin >> A >> B >> V;

    if((V-A)%(A-B)==0) cout << (V-A)/(A-B)+1;
    else cout << (V-A)/(A-B)+2;

    return 0;
}