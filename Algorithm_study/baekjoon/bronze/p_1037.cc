#include <iostream>
#include <queue>
#include <stack>
#include <tuple>
#include <deque>
#include <string>
#include <algorithm>
#include <climits>
#include <cmath>

#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int num_divisor;
    cin >> num_divisor;

    vector<int> divisors(num_divisor);

    for (int i=0; i<num_divisor; i++){
        cin >> divisors[i];
    }

    sort(divisors.begin(), divisors.end());
    int min = *min_element(divisors.begin(), divisors.end());
    int max = *max_element(divisors.begin(), divisors.end());

    if (num_divisor % 2 == 1){
        N = pow(divisors[num_divisor / 2],2);
    }
    else{
        N = min*max;
    }
    cout << N << "\n";
    return 0;
}