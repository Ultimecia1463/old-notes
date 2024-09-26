#include<stdio.h>

int main() {

    int num,sum=0,a,check,x;

    printf("enter a number\n");
    scanf("%d",&num);

    printf("how many digits?\nshould'nt be more than 10\n");
    scanf("%d",&a);

    check=num;

    while (num>0)
    {
        x=num%10;

        switch (a)
        {
        case 1:
            sum=sum+x;
            break;
        
        case 2:
            sum=sum+(x*x);
            break;
        
        case 3:
            sum=sum+(x*x*x);
            break;
        
        case 4:
            sum=sum+(x*x*x*x);
            break;
        
        case 5:
            sum=sum+(x*x*x*x*x);
            break;
        
        case 6:
            sum=sum+(x*x*x*x*x*x);
            break;
        
        case 7:
            sum=sum+(x*x*x*x*x*x*x);
            break;
        
        case 8:
            sum=sum+(x*x*x*x*x*x*x*x);
            break;
        
        case 9:
            sum=sum+(x*x*x*x*x*x*x*x*x);
            break;
        
        case 10:
            sum=sum+(x*x*x*x*x*x*x*x*x*x);
            break;
        
        }

        num=num/10;

    }
    
    if (check==sum)
    {
        printf("your number is armstrong");
    }

    else{
        printf("your number is not armstrong");
    }
    
    return 0;
}