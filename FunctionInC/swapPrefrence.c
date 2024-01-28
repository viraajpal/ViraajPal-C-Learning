
// Swaping with using a third variable.

// #include<stdio.h>

// int main(){
//     int a;
//     printf("Enter a : ");
//     scanf("%d", &a);
//     int b;
//     printf("Enter b : ");
//     scanf("%d", &b);
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("The value of a is: %d\n", a);
//     printf("The value of b is: %d\n", b);
//     return 0;
// }

// Swaping without using a third variable.

// #include<stdio.h>

// int main(){
//     int a;
//     printf("Enter a : ");
//     scanf("%d", &a);
//     int b;
//     printf("Enter b : ");
//     scanf("%d", &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("The value of a is: %d\n", a);
//     printf("The value of b is: %d\n", b);
//     return 0;
// }


//  Swaping with using function. But this method will not work beacuse we are here using "Pass by Value"
//  Insted of using pass by value we can use pass by reffernce then only our code will work .


#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp; 
    return;
}
int main(){
    int a = 2;
    int b = 9;
    // To pass addresses to a and b.
    swap(&a, &b); //  We can pass like this or 2nd way is below.
    // int* x = &a;
    // int* y = &b;
    // swap(x, y);
    // printf();
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    return 0;
}