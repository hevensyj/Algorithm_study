#include <iostream>
#include <queue>
#include <stack>
#include <tuple>
#include <deque>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>

using namespace std;
using ll = long long;

// std::pair 자료구조
// pair<int, int> p = {1, 2};
// 1은 p.first, 2는 p.second로 접근 가능한데,
// 이를 p.X, p.Y로 간단하게 접근 가능하게끔 함
#define X first
#define Y second

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i=0; i<N; i++){
        for (int j=1; j<N-i; j++) cout << " ";
        for (int k=0; k<=i; k++) cout << "*";
        cout << "\n";
    }
}