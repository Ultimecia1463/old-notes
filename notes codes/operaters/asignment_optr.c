#include <stdio.h>

int main(){

    int a,b=9;

    printf("%d\n",a=b);     //puts value of b in a 

    printf("%d\n",a+=b);    // ( a + b ) = a

    printf("%d\n",a-=b);    // ( a - b ) = a                

    printf("%d\n",a*=b);    // ( a * b ) = a

    printf("%d\n",a/=b);    // ( a / b ) = a

    printf("%d\n",a%=b);    // ( a % b ) = a

    return 0;
}