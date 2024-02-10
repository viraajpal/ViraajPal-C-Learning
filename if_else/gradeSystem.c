#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks > 90 && marks < 100){
        printf("Excellent");
    }
    else if(marks > 80 && marks < 90){
        printf("Very Good");
    }
    else if(marks > 70 && marks < 80){
        printf("Good");
    }
    else if(marks > 60 && marks < 70){
        printf("Work Hard");
    }
    else if(marks > 50 && marks < 60){
        printf("Improve");
    }
    else{
        printf("Sorry! Fail");
    }

    return 0;
}