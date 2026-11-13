#include "stdio.h"

void main () {

    int keira, lalantacon;
    printf("Enter your integer: ");
    scanf("%i", &keira);

    lalantacon = keira; 

if (lalantacon % 2== 0) printf("%i is even", keira);
else printf("%i is odd", keira);
}