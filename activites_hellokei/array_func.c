#include "stdio.h" 

int maximum(int Keira[]) {
    int max = Keira[0];

    for (int i=0; i < 10; i++) {
        if (Keira[i] > max)
            max = Keira[i];
    }
    return max;
}

int minimum(int Lalantacon[]) {
    int min = Lalantacon[0];

    for (int i=0; i < 10; i++) {
        if (Lalantacon[i] < min)
            min = Lalantacon[i];
    }
    return min;
}

void main() {
    
    int x [10] = {1,2,3,4,5,6,7,8,9,10};
    int y [10] = {23,-12,34,41,54,69,77,18,90,-10};

    printf("Maximum number is: %i\n", maximum(x));
    printf("Minimum number is: %i\n", minimum(x));
    printf("Maximum number is: %i\n", maximum(y));
    printf("Minimum number is: %i\n", minimum(y));
}
