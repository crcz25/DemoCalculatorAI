#include <stdlib.h> 
#include <stdio.h> 

int main(int argc, char const *argv[]) {
    int a = 0, b = 0, result;

    scanf("%i%*c", &a);
    scanf("%i%*c", &b);

    result = a + b;

    printf("%i", result);

    return 0;
}