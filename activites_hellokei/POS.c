#include "stdio.h"

void main () {
    int Keira;
    float Lalantacon;

printf("(Enter two numbers(int float):");
scanf("%i %f", &Keira, &Lalantacon);


if (Keira > 0) {
    printf("Your %i is positive\n", Keira);
} else if (Keira < 0 ) {
    printf("Your %i is negative\n", Keira);
} else {
    printf("Your %i is neutral\n", Keira);
}

    
if (Lalantacon > 0) {
    printf("Your %.2f is positive\n", Lalantacon);
} else if (Lalantacon < 0 ) {
    printf("Your %.2f is negative\n", Lalantacon);
} else {
    printf("Your %.2f is neutral\n", Lalantacon);
}
    
}