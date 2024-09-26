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

    int h;
    printf("enter the number");
    scanf("%d",&h);


    int arr[50];
    
    for (int i=0 ; i<50 ; i++){

        int x;
        x=random();
        arr[i]=x;
        x=0;

    }
    
    prtar(arr,50);
    printf("now the checking\n");

    for(int i=0 ; i<50 ; i++){
        if (arr[i]==h)
        {
            printf("%d on index %d\n",arr[i],i);
        }
    }

    return 0;
}

