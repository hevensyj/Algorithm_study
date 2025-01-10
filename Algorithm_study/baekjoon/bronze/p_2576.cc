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

    int i=0;
    int min = 99; int sum = 0;
    int num;

    while(i<7){
        cin >> num;
        if (num % 2 == 1){
            if (num < min) min = num;
            sum += num;
        }
        i++;
    }

    if (sum == 0) cout << -1;
    else {
        cout << sum << "\n";
        cout << min;
    }
    return 0;
}