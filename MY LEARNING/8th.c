#include <stdio.h>
int main(){
    float a,b,c;
    a = 79;
    b = 89.99;
    c = 90.99989;
    printf("A = %.2f\n",a);
    printf("B = %.2f\n",b);
    printf("C = %.3f\n",c);
    printf("D = %.4f\n",c);
    printf("E = %.5f\n",c);
    return 0;
}