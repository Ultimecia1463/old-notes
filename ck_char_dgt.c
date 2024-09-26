#include<stdio.h>

int main() {

    char ch;
    char ch1='1';
    char ch2='2';
    char ch3='3';
    char ch4='4';
    char ch5='5';
    char ch6='6';
    char ch7='7';
    char ch8='8';
    char ch9='9';
    char ch0='0';
    
    printf("enter the thing\n");
    
    scanf("%c",&ch);

    printf("%d",
    (
        (ch==ch1)||(ch==ch2)||(ch==ch3)||(ch==ch4)||(ch==ch5)||(ch==ch6)||(ch==ch7)||(ch==ch8)||(ch==ch9)||(ch==ch0)
    )
    );
    
    return 0;
}