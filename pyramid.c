#include<stdio.h>

int main() {

    int n ;
    printf("enter a number \n");
    scanf("%d",&n);
    int x=1;
    
    for (int i =0 ; i<n ; i++){

        for( int a=0; a<n ; a++ ){
            printf(" ");
        }

        for(int t=0; t<x; t++){
        printf("*");
        }
        printf("\n");
        n--;
        x+=2;
    }
    return 0;
}