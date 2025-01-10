/*
잘못된 코드.
반례 1) S가 a552bsar, K가 abs라면 1이 나와야 하는데, 0이 나옴

그리고 반례가 없더라도 이중 반복문이 최악의 경우 20만*20만의 연산을
수행해야 되므로 메모리 초과 & 시간 초과가 발생했을 것.
*/


#include <iostream>
#include <queue>
#include <stack>
#include <tuple>
#include <climits>
#include <algorithm>
#include <cmath>
#include <string>
#include <deque>

#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // S: 교과서 문자열 (널 문자 생각해서 200001로 하자)
    // K: 키워드 문자열 (널 문자 생각해서 200001로 하자)

    // KMP 쓰면 좋을 것 같은데.. 어떻게쓰지
    string S, K;

    char remove[] = {'0','1', '2', '3', '4', '5', '6', '7', '8','9'};

    cin >> S >> K;

    int remove_size = sizeof(remove) / sizeof(remove[0]); // 배열 크기 계산

    // 특정 문자 제거
    S.erase(remove_if(S.begin(), S.end(), [&](char c) {
        // 배열에 있는 문자인지 확인
        for (int i = 0; i < remove_size; i++) {
            if (c == remove[i]) return true; // 배열에 포함되면 제거 대상
        }
        return false; // 포함되지 않으면 유지
    }), S.end());

    cout << S << "\n";

    int S_size = S.size();
    int K_size = K.size();

    vector <int> index;

    for (int k=0; k<K_size; k++){
        for (int s=0; s<S_size; s++){
            if (K[k]==S[s]){
                index.push_back(s);
                cout << S[s] << " ";
            }
        }
    }

    // int cnt=0;

    // for (int j=1; j<index.size(); j++){
    //     if(index[j]-index[j-1]==1){
    //         cnt += 1;
    //         // cout << index[j] << "whyy" << index[j-1] <<  "\n";
    //     }
    // }

    // bool exists = false;

    // if (cnt == index.size()-1){
    //     exists = true;
    // }

    // cout << (int)exists;

    return 0;
}