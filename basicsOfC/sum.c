//Sum of two number

// #include<stdio.h>

// int main(){
//     int firstNumber, secondNumber;\
//     printf("Enter the firstNumber and secondNumber");
//     scanf("%d%d", &firstNumber, &secondNumber);
//     printf("firstNumber = %d secondNumber = %d", firstNumber, secondNumber);
//     printf("\nThe sum of first and second is: %d", firstNumber + secondNumber);
//     return 0;
// }

//Take two input from the user and print the remainder while deviding

// #include<stdio.h>

// int main(){
//     int a, b;
//     printf("enter your a: ");
//     scanf("%d", &a);
//     printf("Enter your b: ");
//     scanf("%d", &b);
//     // int q = a/b;
//     // int r = a - b * q;
//     // printf("The remender is: %d", r);
//     int r = a % b;
//     printf("The remender is: %d", r);
//     return 0;
// }

//Take a float value and remove the integer value from this and print float valur as output

#include<stdio.h>

int main(){
    float x = 6.09;
    // sacnf("%f", &x);
    int y = 6;
    float z = x - y;
    printf("%f", z);
    return 0;
}