// #include<stdio.h>

// int main(){
//     int a ;
//     printf("Enter first number: ");
//     scanf("%d", &a);
//     int b ;
//     printf("Enter Second number: ");
//     scanf("%d", &b);

//     int sum = a + b;
//     printf("The sum of a and b is: %d", sum);

//     return 0;
// }

// With the help of function we can do the same thing.

#include<stdio.h>
int add(int x, int y){
    return x + y;
}

int main(){
    int a ;
    printf("Enter first number: ");
    scanf("%d", &a);
    int b ;
    printf("Enter Second number: ");
    scanf("%d", &b);

    int sum = add(a, b);
    printf("The sum of a and b is: %d", sum);

    return 0;
}