#include<stdio.h>

int max(int a ,int b){

    int *ptra = &a;
    int *ptrb = &b;

    if (ptra > ptrb)
    {
        return a;
    }
    else{
        return b;
    }
    
}

int main() {

    int x,y;

    printf("enter 2 number \n");
    scanf("%d",&x);
    scanf("%d",&y);

    printf("%d",max(x,y));

    return 0;
}