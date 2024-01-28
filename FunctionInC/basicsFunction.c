// #include<stdio.h>

// void greet(){
//     printf("Hello World!\n");
//     printf("Hello Viraaj!\n");
//     return;
// }

// int main(){
//     greet(); // function call.
//     return 0;
// }

#include<stdio.h>

void england(){
    printf("You are in England!\n");
    return ;
}
void australia(){
    printf("You are in Australia!\n");
    england();
    return ;
}
void india(){
    printf("You are in India!\n");
    australia();
    return ;
}
int main(){
    india();
    return 0;
}