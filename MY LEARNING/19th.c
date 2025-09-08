#include <stdio.h>

int main() {
    int a;
    printf (" tell me which no u want as input:");
    scanf("%d",&a);

    switch (a){
        case 1:
            printf("you entered 1\n");
            break;
        case 90:
            printf("you entered 90\n");
            break;
        default:
            printf("you entered wrong no.");
    }
    return 0;
}