#include <stdio.h>

int main() {
    int num = 302;  
    int *ptr = &num; 
    int **ptr2 = &ptr; 
    int ***ptr3 = &ptr2;

    // Printing the values and addresses
    printf("num (original): %d\n\n", num);                // Directly accessing num
	
    printf("ptr: 0x%08X\n", ptr);          // Address stored in ptr
    printf("*ptr: %d\n\n", *ptr);     // Dereferencing ptr to access num

    printf("ptr2: 0x%08X\n", ptr2);        // Address stored in ptr2
    printf("*ptr2: 0x%08X\n", *ptr2); // Dereferencing ptr2 to get ptr
    printf("**ptr2: %d\n\n", **ptr2); // Dereferencing ptr2 twice to get num

    printf("ptr3: 0x%08X\n", ptr3);        // Address stored in ptr3
    printf("*ptr3: 0x%08X\n", *ptr3); // Dereferencing ptr3 to get ptr2
    printf("**ptr3: 0x%08X\n", **ptr3); // Dereferencing ptr3 twice to get ptr
    printf("***ptr3: %d\n\n", ***ptr3); // Dereferencing ptr3 three times to get num

    return 0;
}
