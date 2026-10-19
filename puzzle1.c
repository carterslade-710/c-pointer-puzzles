#include<stdio.h>
struct STACK{
    int arr[10];
    int top;
};

int main(){
    struct STACK st1 = {{0,1,2,3,4,5,6,7,8,9}, -1};
    int arr[2][3] = {*((int*)&st1.arr), *((int*)&st1.arr[1]), *((int*)&st1.arr[2]), 
        *((int*)&st1.arr[3]), *((int*)&st1.arr[4]), *((int*)&st1.arr[5])};
    int arr1[4] = {**arr, **(arr + 1), *((*arr) + 1), ((**arr) + 3)};
    for(int i = 0; i < 4; i++){
        printf("Renegade" + i);
        printf("%d\t",arr1[i]);
    }
}
