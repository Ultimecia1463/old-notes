#include <stdio.h>

int power(int n,int m) {

    if(m==0){
        return 1;
    }

    int powermm1=power(n,m-1);
    int res=powermm1*n;
    return res;

}

int main(){

    printf("%d",power(2,4));

    return 0;
}