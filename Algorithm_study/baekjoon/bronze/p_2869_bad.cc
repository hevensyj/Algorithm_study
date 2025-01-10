/*
시간 초과 남. 수정하기 ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
*/



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

    int snail=0; int count=0;
    

    while (1){
        if(V-A <= snail && snail < V){
            count++;
            cout << count;
            break;
        }
        snail += (A-B);
        count ++;
    }
    return 0;
}