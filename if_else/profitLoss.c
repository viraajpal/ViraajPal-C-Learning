#include<stdio.h>

int main(){
    int sp ;  
    printf("Enter your SP: ");
    scanf("%d", &sp);
    int cp ;
    printf("Enter your CP: ");
    scanf("%d", &cp);
    if(sp > cp){
        printf("yes! You got the profit! ");
    }
    if(sp == cp){
        printf("That's fine! No-Profit, No-Loss!");
    }
    else{
        printf("Oh-No! you had a loss!");
    }
    return 0;
}