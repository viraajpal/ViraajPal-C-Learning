//First way to solve this question.

// #include<stdio.h>
// int min(int a, int b){
//     if(a > b) return a;
//     else return b;
// }
// int gcd(int a, int b ){
//     int hcf;
//     for(int i = 1; i < min(a, b); i++){
//         if(a % i == 0 && b % i == 0){
//             hcf = i;
//         }
//     }
//     return hcf;
// }
// int main(){
//     int a;
//     printf("Enter number a: ");
//     scanf("%d", &a);
//     int b;
//     printf("Enter number b: ");
//     scanf("%d", &b);
//     int hcf = gcd(a, b); // function name is gcd here!
//     printf("The hcf or gcd of %d and %d is: %d", a, b, hcf);
//     return 0;
// }

// Second way to solve this question.


#include<stdio.h>
int min(int a, int b){
    if(a > b) return a;
    else return b;
}
int gcd(int a, int b ){
    int hcf;
    for(int i = min(a, b); i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a;
    printf("Enter number a: ");
    scanf("%d", &a);
    int b;
    printf("Enter number b: ");
    scanf("%d", &b);
    int hcf = gcd(a, b); // function name is gcd here!
    printf("The hcf or gcd of %d and %d is: %d", a, b, hcf);
    return 0;
}
