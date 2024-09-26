#include<stdio.h>
#include<stdlib.h>

void prtar(int arr[],int n){

    printf("\n{");

    for (int i=0 ; i<n ; i++){
        printf("%d,",arr[i]);
    }

    printf("}\n");

}

int main() {

    int arr[10];
    int h=9;

    printf("enter 10 elements");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    prtar(arr,10);
    
    for(int i = 0; i < 9; i++){
        
        arr[i]=arr[i+1];

    }

    arr[9]=h;

    printf("new array is \n");
    prtar(arr,10);

    return 0;
}