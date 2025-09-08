//logical operator
#include <stdio.h>

int main() {

    int a =22 , b= 0;
    printf ("the value of a and b is %d\n",a&&b);
    printf ("the value of a and b is %d\n",a||b);
    printf ("the value of not(a and b) is %d and %d\n",!a,!b);

    if(a&&b){
        printf("i will not run both are true\n");

    }
    if(a){
        if(!b){
            printf("both are true");
 
        }
    }
    
    return 0;
}