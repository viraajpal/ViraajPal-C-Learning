//Check Divisiblity

// #include<stdio.h>

// int main(){
//     int x ;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     if(x%5==0){
//         printf("yes! Divisible ");
//     }
//     else{
//         printf("No! Not Divisible");
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int x;
    printf("Enter your year!: ");
    scanf("%d", &x);
    if(x%4==0){
        printf("Entered year is leap year!");
    }
    else{
        printf("Entered year is not leap year. It's a ordinary year");
    }
}