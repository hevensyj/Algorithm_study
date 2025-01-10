#include <iostream>
#include <queue>
#include <stack>
#include <tuple>
#include <deque>
#include <string>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;
using ll = long long;
#define X first
#define Y second

void printhook(int);

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);
    printhook(1);
    printhook(2);
    printhook(2);
    printhook(1);
    cout << endl;
    printhook(2);
    printhook(1);
    printhook(1);
    printhook(3);
    cout << endl;
    printhook(2);
    printhook(1);
    printhook(1);
    printhook(3);
    cout << endl;
    printhook(1);
    printhook(2);
    printhook(2);
    printhook(1);

    return 0;
}

void printhook(int num){
    if (num == 1) cout << "#  # ";
    else if (num == 2) cout << "#### ";
    else if (num == 3) cout << "# # ";
    else cerr << "wrong number" << endl;
}