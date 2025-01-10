#include <iostream>
#include <queue>
#include <stack>
#include <tuple>
#include <deque>
#include <algorithm>
#include <climits>
#include <string>
#include <cmath>

/*
graph로 나타내기 => level 수
*/

/*
lev1: 1
lev2: 2~7 => 6 => 0
lev3: 8~19 => 12 => 1~2
lev4: 20~37 => 18 => 3~5
lev5: 38~61 => 24
*/

using namespace std;

int findlevel(int N){
    int level;
    int i=0;

    if (N==1) level=1;

    else{
        while (true){
            if(i*(i+1)/2 <= (N-2)/6 && (N-2)/6 < (i+1)*(i+2)/2){
                level=i+2;
                break;
            }
            else i++;
        }
    }

    return level;
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int rooms = findlevel(N);

    cout << rooms;

    return 0;
}

/*
더 간결한 코드

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  int fi = 1;
  int add = 6;
  int ans = 1;
  while(1) {
    if(n <= fi) {
      break;
    }
    fi += add;
    ans++;
    add += 6;
  }
  cout << ans;
}

*/