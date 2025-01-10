#include <iostream>
#include <queue>
#include <stack>
#include <tuple>
#include <deque>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>

using namespace std;

int findN(int);

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B;
    cin >> A >> B;

    int n_A = findN(A);
    int n_B = findN(B);

    int sum = 0;

    if (n_A == n_B){
        sum += n_A * (B-A+1);
    }
    else{            
        sum += (n_A*(n_A+1)/2-A+1)*n_A;
        sum += (B-(n_B-1)*n_B/2)*n_B;
    }
    int i = n_A +1;

    while(i<n_B){
        sum += i*i;
        i++;
    }
    cout << sum << "\n";
}

int findN(int x){
    int n;
    for (int i=1; i<=46; i++){
        if ((i-1)*i/2 < x && x <= i*(i+1)/2){
            n = i;
        }
    }
    return n;
}