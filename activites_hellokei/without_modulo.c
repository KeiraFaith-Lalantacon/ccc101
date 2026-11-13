#include "stdio.h"

void main () {

    int keira, lalantacon;
    printf("Enter your integer: ");
    scanf("%i", &keira);

    lalantacon = keira; 

    while (lalantacon > 0) {
        lalantacon -=2;
    }

if (lalantacon == 0) printf("%i is even", keira);
else printf("%i is odd", keira);
}