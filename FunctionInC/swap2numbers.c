
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
// Insted of using pass by value we can use pass by reffernce then only our code will work .


#include<stdio.h>
void swap(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
}
int main(){
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    int b;
    printf("Enter b : ");
    scanf("%d", &b);
    swap(a, b); // function call
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    return 0;
}