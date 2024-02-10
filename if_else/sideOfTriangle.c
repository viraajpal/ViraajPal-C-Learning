#include<stdio.h>
int main(){
    int a ;
    printf("Enter 1st side: ");
    scanf("%d", &a);
    int b ;
    printf("Enter 2nd side: ");
    scanf("%d", &b);
    int c ;
    printf("Enter 3rd side: ");
    scanf("%d", &c);
    
    if((a + b) > c && (a + c) > b && (c + b) > a){
        printf("Valid Triangle");
    }
    else{
        printf("Invalid Triangle");
    }
    return 0;
}