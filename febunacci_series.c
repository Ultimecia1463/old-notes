#include<stdio.h>

int main() {

    long long int a=0,b=1,c=0;

    printf("0 1 ");

    for (int i=0;i<100;i++){
        
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
        c=0;

    }

    return 0;
}
