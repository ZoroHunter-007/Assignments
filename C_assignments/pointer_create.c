#include <stdio.h>

int main() {
    int x ;
    printf("Enter a x:");
    scanf("%d",&x);
    int *ptr = &x; // Pointer to x

    printf("Value of x: %d\n", x);       // Prints 42
    printf("Address of x: %p\n", &x);    // Prints address of x
    printf("Pointer value: %p\n", ptr);  // Prints address of x
    printf("Value via pointer: %d\n", *ptr); // Prints 42 (dereferencing)

    return 0;
}
