#include<stdio.h>

int main(){
    int a = 9;
    int* x = &a;
    // printf("%p", x); // Pointer x holds the value of a.

    int** y = &x; // double pointer
    printf("%d\n", a);
    // printf("%d\n", a);
    // printf("%d\n", a);
    // printf("%d\n", a);




    return 0;
}