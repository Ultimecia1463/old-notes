#include<stdio.h>

int main() {

    int a=4 ,b=8 ,c=7,d=3;

    printf("addition %d \n",a+b);

    printf("subtraction %d \n",c-d);

    printf("multiplication %d \n",a*d);

    printf("division %d \n",b/d);  //gives quotient

    printf("modulo %d \n",b%c);    //gives remainder

    printf("%d\n",  a++  );        //first print then add

    printf("%d\n",  b--  );        //first print then sub

    printf("%d\n",  ++c  );        //first add then print

    printf("%d\n",  --d  );        //first sub then print


    return 0;
}