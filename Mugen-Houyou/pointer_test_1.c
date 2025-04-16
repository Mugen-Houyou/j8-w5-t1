#include <stdio.h>

void main() {
    // 포인터가 헷갈리는 이유
    
    printf("int value = 123;\n");
    int value = 123;
    printf("value: %d\n\n", value); // 출력 결과 123

    printf("int* ptr1 = &value;\n");
    int *ptr1 = &value; 
    printf("ptr1: %p\n", ptr1); 
    printf("*ptr1: %d\n", *ptr1); 
    printf("&value: %p\n\n", &value); 

    printf("*ptr1 = 456;\n");
    *ptr1 = 456; 
    printf("ptr1: %p\n", ptr1);
    printf("*ptr1: %d\n", *ptr1);   // 출력 결과 456
    printf("&value: %p\n\n", &value); 
    
    printf("&*ptr1: %p\n",&(*ptr1));
    printf("&ptr1: %p\n\n",&ptr1);
}
