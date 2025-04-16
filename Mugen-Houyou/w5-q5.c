#include <stdio.h> 
  
void func(int* arr, int count) { 
    for(int i=0;i<count; i++){
        arr[i]++;
    }
} 

void func_ans(int* p, int count) { 
    for(int i=0;i<count; i++){
        *p = *p + 1; // 값을 추가합니다.
        p = p + 1; // 주소를 추가합니다. (다음 주소로 넘어감)
    }
} 
  
int main() { 
    int arr[5] = {1, 2, 3, 4, 5}; 
    func_ans(arr, 5); 
    for (int i = 0; i < 5; i++) 
        printf("%d ", arr[i]); 
    return 0; 
} 
