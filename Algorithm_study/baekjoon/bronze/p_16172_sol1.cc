#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string S, K, tmp;

int main(){
    cin>>S>>K;

    // tmp = tmp + S[i];와 같이 저장하면 시간초과가 난다.
    // 저장하며 메모리를 추가로 사용하지 않기 때문.
    for(int i=0; i<S.length(); i++) if(isalpha(S[i])) tmp.push_back(S[i]);

    if(tmp.find(K)==string::npos) cout<<"0";
    else cout<<"1";
}