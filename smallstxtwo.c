#include<stdio.h>

int main() {

    int a,b;

    printf("enter two numbers");
    scanf("%d",&a);
    scanf("%d",&b);
    
    if (a<b)
    {
        printf("%d is smaller ",a);
    }

    else
    {
        printf("%d is smaller",b);
    }

    return 0;
}