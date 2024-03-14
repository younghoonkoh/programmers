#include <iostream>


int main() {
    int A = 0, B = 0, C = 0, num =0;
    int arr[10] = { 0 };
    scanf("%d %d %d", &A, &B, &C);
    int mul = A * B * C;

    while (mul > 0) {
        num = mul % 10;
        arr[num]++;
        mul /= 10;
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

