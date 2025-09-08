//size of char int float and double
#include <stdio.h>
int main (){
    int sizeint;
    float sizefloat;
    char sizechar;
    double sizedouble;
    sizeint = 2323;
    sizefloat = 90.999;
    sizechar = 'c';
    sizedouble = 90.85894;
    printf ("size of int= %zu\n",sizeof(sizeint));
    printf ("size of float= %zu\n",sizeof(sizefloat));
    printf ("size of char= %zu\n",sizeof(sizechar));
    printf ("size of double= %zu\n",sizeof(sizedouble));
    return 0;
}