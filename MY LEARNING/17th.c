#include <stdio.h>

int main()
{
    int age = 18;
    if (age>80)
    {
        printf("you can drive car and u are older");
    }
    else if(age>40){
        printf("you can drive car and u are elder");
    }
    else if(age>=18){
        printf("you can drive car and u are adult");
    }
    else{
        printf("you can not drive car becuase u are not adult");
    }
    return 0;
}