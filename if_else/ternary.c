#include<stdio.h>

int main(){
    int x;
    printf("Enter a number to check: ");
    scanf("%d", &x);
    x % 2 == 0 ? printf("This is even!") : printf("This is odd!");
    return 0;
}