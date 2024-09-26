#include<stdio.h>

void temperature(int n) {

    if (n<32)
    {
        printf("cold\n");
    }

    else{
        printf("hot\n");
    }

}

int main(){

    temperature(54);

    return 0;
}