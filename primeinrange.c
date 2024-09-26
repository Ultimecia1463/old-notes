#include<stdio.h>

int main() {

    int n=1;
    int number=0;
    int count=0;
    int i;
    int u;

    printf("enter the lower limit\n");
    scanf("%d", &n);
    printf("enter the upper limit\n");
    scanf("%d", &u);


    for( ; ;number++){
        count=0;
        if (number == 0 || number == 1)
        {count = 1;}

        for (i = 2; i <= number / 2; ++i) {

            if (number % i == 0) {
            count = 1;
            }
        }


        if (count == 0)
            {printf("%d is a prime number.\n", number);
            ++n;
            }  

        if (number==u)
        {
            break;
        }
        
        }  
    }