#include<stdio.h>
#include <stdlib.h>


int main() {

    int x;
    printf("enter a random number \n");
    scanf("%d",&x);
    printf("%d\n",x);
    x > 50 ? printf("you are lucky\n") : printf("you are unlucky\n");

    return 0;
}
