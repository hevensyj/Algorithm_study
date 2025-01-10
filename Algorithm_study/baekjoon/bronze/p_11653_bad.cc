/*
시간 초과된 코드. 소수 찾기에서 시간 너무 걸림....
*/

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

vector<int> primesearch(int);

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    // N이 소수인 경우에 N이 포함되지 않는 문제 해결하기 위함.
    vector <int> primenums = primesearch(N+1);

    if (N == 1) cout << "\n";
    else{
        for (int i = 0; i<primenums.size(); i++){
            while (N % primenums[i] == 0)
            {
                cout << primenums[i] << "\n";
                N /= primenums[i];
            }
        }
    }

    return 0;
}

vector<int> primesearch(int N){
    vector <int> primenumbers;
    for(int i = 2; i<N; i++){
        bool isprime = true;
        for(int j = 2; j<i; j++){
            if(i%j == 0){
                isprime  = false;
            }
        }
        if(isprime)
        {
            primenumbers.push_back(i);
        }
    }
    return primenumbers;
}