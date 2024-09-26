#include<stdio.h>

int main() {
    int age = 22;               //      *    points to a memory location 
    int *ptr = &age;            //      &    provides memory location
    int _age = *ptr;

    printf("%d\n", _age);

    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);

    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    return 0;
}
