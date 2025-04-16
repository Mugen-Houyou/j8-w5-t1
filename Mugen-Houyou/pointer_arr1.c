#include <stdio.h>

int main() {
    int arr[5][3] = {
        { 1,  2,  3 },
        { 4,  5,  6 },
        { 7,  8,  9 },
        {10, 11, 12},
        {13, 14, 15}
    };

    // p는 "3개의 int를 담고 있는 배열"을 가리키는 포인터
    // int (*p)[3] = arr;
    int (*p)[3];
    p = arr;

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p[i]+2));
        // for (int j = 0; j < 3; j++)
        //     printf("%d ", p[i][j]);
        printf("\n");
    }
    return 0;
}
