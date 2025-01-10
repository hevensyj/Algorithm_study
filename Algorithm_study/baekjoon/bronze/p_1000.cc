// #include <iostream>
// using namespace std;

// int main(void){
//     int A, B;
//     cin >> A >> B;

//     cout << A+B << endl;
//     return 0;
// }

// C++ 코드는 추가적인 오버헤드가 존재하여 메모리가 커짐.
// C 코드를 이용하여 메모리 크기 줄이기
#include <stdio.h>
int main() {
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("%d", sum);
    return 0;
}