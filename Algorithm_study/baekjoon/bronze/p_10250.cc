#include <iostream>
#include <iomanip> // setw, setfill 사용을 위해 필요

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 테스트케이스 수
    int T;

    // 호텔의 층수, 각 층의 방수, 몇 번째 손님인지
    int H, W, N;
    cin >> T;
    for (int i=0; i<T; i++){
        cin >> H >> W >> N;

        if (N % H == 0){
            cout << H;
            cout << setw(2) << setfill('0') << N / H << "\n";
        }

        else
        {
            cout << N % H;
            cout << setw(2) << setfill('0') << N / H + 1 << "\n";
        }
    }
}