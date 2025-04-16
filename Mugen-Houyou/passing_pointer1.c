#include <stdio.h>
#include <stdlib.h>

void callee1(int ***ptr3) {
    printf("callee1에서 수정 전 value: %d\n", ***ptr3); // 출력 결과 123
    **ptr3 = (int *)malloc(sizeof(int));
    if (**ptr3 == NULL) 
        return;
    ***ptr3 = 321; // 321을 대입
    printf("callee1에서 수정 후 value: %d\n", ***ptr3); // 출력 결과 321
}

void callee0(int *ptr1) {
    printf("callee1에서 수정 전 value: %d\n", *ptr1); // 출력 결과 123

    *ptr1 = 12345;
    
    printf("callee1에서 수정 후 value: %d\n", *ptr1); // 출력 결과 321
}


int main() {
    int value = 123;
    printf("%d\n",value)    ;
    callee0(&value);
    printf("%d\n",value)    ;

    return 0;

}







//     printf("호출 전 value: %d\n", **ptr2); // 출력 결과 123
//     callee1(&ptr2);
//     printf("호출 후 value: %d\n", **ptr2); // 출력 결과 321    

//     printf("====================================\n");
//     printf("value: %d\n", value); // 출력 결과 123

//     printf("ptr1: %p\n", ptr1); // ptr1의 주소
//     printf("*ptr1: %d\n", *ptr1); // ptr1이 가리키는 값

//     printf("ptr2: %p\n", ptr2); // ptr2의 주소
//     printf("*ptr2: %p\n", *ptr2); // ptr2가 가리키는 ptr1의 주소
//     printf("**ptr2: %d\n", **ptr2); // ptr2가 가리키는 ptr1이 가리키는 값

//     free(*ptr2); 
// }