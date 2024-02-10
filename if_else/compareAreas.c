// check wheather area and perimeter comparision

#include<stdio.h>
int main(){
    int len;
    printf("Enter the length of Rectange: ");
    scanf("%d", &len);
    int breadth;
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &breadth);
    int area = len * breadth;
    // printf("The area of rectangle is: ", area);
    int perimeter = 2 * (len + breadth);
    // printf("The perimeter of rectangle is: ", perimeter);

    if(area > perimeter){
        printf("The area is greater than perimeter of rectangle!");
    }
    else if(area == perimeter){
        printf("Area and perimeter are both equal!");
    }
    else{
        printf("The perimeter is greater than area of the rectangle!");
    }
    return 0;
}