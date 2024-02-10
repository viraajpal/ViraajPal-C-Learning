#include<stdio.h>

int main(){
    int n ;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n > 99 && n < 1000){
        printf("Entered number is greater than two degit number.");
    }
    else if(n >= 1000){
        printf("Entered  number is greater than 3 degit number.");
    }
    else{
        printf("Entered number is less than 3 degit number");
    }
}