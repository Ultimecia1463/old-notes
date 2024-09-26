#include<stdio.h>
#include<stdlib.h>

void prtar(int arr[],int n){

    for (int i=0 ; i<n ; i++){
        printf("%d at index %d \n",arr[i], i);
    }

}

int random(){
    int x=rand();
    int z=x%10;
    return z;
}

int main() {

    int arr[50];
    int h=0;

    for (int i=0 ; i<50 ; i++){

        int x=0;
        x=random();
        arr[i]=x;

    }
    
    prtar(arr,50);
    printf("now the checking\n");

    for(int i=0 ; i<50 ; i++){
        if (arr[i]>h)
        {
            h=arr[i];
        }
    }

    printf("%d",h);

    return 0;
}