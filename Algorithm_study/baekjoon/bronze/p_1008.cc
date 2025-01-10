#include <stdio.h>

int main(void){
    int A, B;
    scanf("%d %d", &A, &B);
    double result;
    result = (double)(A) / (double)(B);
    printf("%.9lf", result);
    return 0;
}
