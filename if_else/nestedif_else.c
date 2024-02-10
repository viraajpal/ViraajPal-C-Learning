// Nested If-else condtions...

#include <stdio.h>

int main(){
    int n ;
    printf("Enter a number to check: ");
    scanf("%d", &n);

    if(n % 5 == 0 ){
        if(n % 3 == 0){
            printf("Enter number is divisible by both of them!.");
        }
        else{
            printf("Enter number is not divisible by both of them!.");
        }
    }
    else{
        printf("Enter number is not divisible by both of them!.");
    }
    return 0;
}