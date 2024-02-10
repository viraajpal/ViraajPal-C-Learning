#include<stdio.h>

int main(){
    int n ;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 5 == 0 || n % 3){
        printf("Entered number is divisible by 5 or 3");
    }
    else{
        printf("Entered number is not divisibe by 5 or 3.");
    }
}