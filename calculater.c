#include<stdio.h>

float add(float a,float b){
    return a + b;
}

float sub(float a,float b){
    return a - b;
}

float mult(float a,float b){
    return a * b;
}

float div(float a,float b){
    return a / b;
}

int main() {

    float n1=0,n2=0,result;
    char optr;

    printf("enter a number\n");
    scanf("%f",& n1);

    printf("enter the arithematic function\n");
    scanf(" %c",& optr);

    printf("enter a number\n");
    scanf("%f",& n2);

    if (optr=='+')
    {
        result=add(n1,n2);
        printf("= %f",result);
    }

    else if (optr=='-')
    {
        result=sub(n1,n2);
        printf("= %f",result);
    }

    else if (optr=='*')
    {
        result=mult(n1,n2);
        printf("= %f",result);
    }

    else if (optr=='/')
    {
        result=div(n1,n2);
        printf("= %f",result);
    }
    
    else
    {
        printf("error");
    }

    return 0;
}