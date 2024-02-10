#include<stdio.h>

int main(){
    int Ram;
    printf("Enter the age of Ram: ");
    scanf("%d", &Ram);
    int Shyam;
    printf("Enter the age of Shyam: ");
    scanf("%d", &Shyam);
    int Ajay;
    printf("Enter the age of Ajay: ");
    scanf("%d", &Ajay);
    if (Ram > Shyam){
        if(Ram > Ajay)
            printf("Ram is oldest!", &Ram);
        else
            printf("Ajay is oldest", &Ajay);
    }
    else{
        if(Shyam > Ajay){
            if(Shyam > Ram)
                printf("Shyam is oldest", &Shyam);
            else
                printf("Ajay is oldest", &Ajay);
        }
    }
}
