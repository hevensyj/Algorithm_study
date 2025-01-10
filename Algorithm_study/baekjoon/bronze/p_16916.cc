/*
KMP 사용.
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

int pmatch(string S, string P, int failure[]){
    int i=0; int j=0;
    int lens = S.length(); int lenp = P.length();
    while(i<lens && j<lenp){
        if(S[i]==P[j]){ i++; j++; }
        else if (j==0) i++;
        else j=failure[j-1]+1;
    }
    return (j==lenp ? 1 : 0);
}

void fail(string P, int failure[]){
    int i; int j;
    int n = P.length();
    failure[0] = -1;
    for(j=1; j<n;j++){
        i=failure[j-1];
        while(P[j] != P[i+1] && i>=0){ i=failure[i]; }
        if (P[j]==P[i+1]) failure[j]=i+1;
        else failure[j]=-1;
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S, P;
    cin >> S >> P;

    int failure[S.length()];

    fail(P, failure);

    int result = pmatch(S, P, failure);

    cout << result;

    return 0;
}