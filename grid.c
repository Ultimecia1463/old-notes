#include<stdio.h>

int main() {

    int a,b;

    printf("enter the length");
    scanf("%d",&b);
    printf("enter the breadth");
    scanf("%d",&a);

    for (int i=0 ; i<b ; ++i )
    {
        for (int j=0 ; j<a ; ++j )
        {
            printf("* ");
        }
        printf("\n");
        
    }
    

    return 0;
}