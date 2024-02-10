#include<stdio.h>

int main(){
    int a ;
    printf("Enter a number a: ");
    scanf("%d", &a);
    int b ;
    printf("Enter a number b: ");
    scanf("%d", &b);
    int c ;
    printf("Enter a number c: ");
    scanf("%d", &c);
    int d ;
    printf("Enter a number d: ");
    scanf("%d", &d);
    if(a > b && a > c && a > d){
        printf("%d is greatest.", a);
    }
    else if(b > a && b > c && b > d){
        printf("%d is greatest.", b);
    }
    else if(c > a && c > b && c > d){
        printf("%d is greatest.", c);
    }
    else{
        printf("d is greatest.", d);
    }
}