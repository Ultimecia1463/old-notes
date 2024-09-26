#include<stdio.h>

int sumdigit(int n) {

    int sum=0,x;

    while (n>0)
    {
        x=n%10;

        sum=sum+x;

        n=n/10;
    }

    return sum;
}

int main(){

    int x;
    x=sumdigit(123);
    printf("%d",x);

    return 0;
}