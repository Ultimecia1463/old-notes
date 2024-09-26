#include<stdio.h>

int main() {

    // AND OPERATOR 

    printf("%d\n",1 && 1);  // true and true is true 

    printf("%d\n",1 && 0);  // true and false is false

    printf("%d\n",0 && 1);  // false and true is false 

    printf("%d\n\n",0 && 0);  // false and false is false 


    //OR OPERATOR 

    printf("%d\n",1 || 1);  // true or true is true 

    printf("%d\n",1 || 0);  // true or false is true 

    printf("%d\n",0 || 1);  // false or true is true  

    printf("%d\n\n",0 || 0);  // false or false is false 


    //NOT OPERATER

    printf("%d\n",!0);  // false is not true  

    printf("%d\n",!1);  // true is not false 
    
    return 0;
}