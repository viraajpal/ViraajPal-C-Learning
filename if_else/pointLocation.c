#include<stdio.h>
int main(){
    int x, y;
    printf("Enter the cordinates: " );
    scanf("%d%d", &x, &y);
    if (x == 0 && y == 0){
        printf("points lies on the orgin!");
    }
    else if(x == 0){
        printf("Points lies on the y-axis!");
    }
    else if(y == 0){
        printf("Points lies on the x-axis!");
    }
    else{
        printf("Points does not lies on the x-axis and y-axis!");
    }   
    return 0;
}