#include<stdio.h>

int main(){

    int n;
    printf("Enter the number to check: ");
    scanf("%d", &n);
    if(n>5){
        printf("Entered number is greater than 5.");
    }
    else if(n == 5){
        printf("Entered number is nor greater than 5 nor less than 5.");
    }
    else{
        printf("Entered number is less than 5.");
    }
    return 0;
}