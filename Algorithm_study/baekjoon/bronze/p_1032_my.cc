#include <iostream>
#include <iomanip>
#include <queue>
#include <stack>
#include <tuple>
#include <deque>
#include <string>
#include <algorithm>
#include <climits>
#include <cmath>

#include <cstring>
#include <vector>

using namespace std;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    // 파일 이름의 개수
    int N;
    cin >> N;

    char file[N][51];

    for (int i=0;i<N;i++) cin >> file[i];

    if (N == 1){
        cout << file[0];
        return 0;
    }

    int flength = strlen(file[0]);

    for (int i=1;i<N;i++){
        for (int j=0; j<flength; j++){
            if (file[0][j] != *(*(file+i)+j)){
                file[0][j] = '?';
            }
        }
    }

    cout << file[0];

    return 0;
}
