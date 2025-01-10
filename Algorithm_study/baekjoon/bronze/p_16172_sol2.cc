/*
KMP 알고리즘을 활용한 문자열 탐색
*/

#include <iostream>
#include <string>

using namespace std;

int pmatch(string S, string K, int failure[]){
    int i=0; int j=0;
    int lenS = S.length();
    int lenK = K.length();

    while (i < lenS && j < lenK){
        if(S[i]==K[j]){
            i++;
            j++;
        }
        else if (j==0){
            i++;
        }
        else j = failure[j-1]+1;
    }
    return (j==lenK ? 1 : 0);
}

void fail(string K, int failure[]){
    int i, j;
    int n = K.length();
    failure[0] = -1;
    for (j=1; j<n; j++){
        i = failure[j-1];
        while (K[j] != K[i+1] && i>=0){
            i=failure[i];
        }
        if (K[j] == K[i+1]) failure[j] = i+1;
        else failure[j] = -1;
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S, K, tmp;
    cin >> S >> K;

    for(int i=0; i<S.length(); i++) if(isalpha(S[i])) tmp.push_back(S[i]);
    
    int failure[tmp.length()];

    fail(K, failure);

    int result;
    result = pmatch(tmp, K, failure);

    cout << result;
    
    return 0;
}