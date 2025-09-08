#include <stdio.h>

int main() {
    char c;
    int a;
    scanf("%d",&a);
    if(a<=100&&a>=90){
        printf("your grade is A");


    }
     else if(a<90&&a>=80){
        printf("your grade is B");


    }
     else if(a<80&&a>=70){
        printf("your grade is C");


    }
     else if(a<70&&a>=60){
        printf("your grade is D");


    }
     else if(a<60&&a>=50){
        printf("your grade is E");


    }
     else {
        printf("ur grade is F");
     }


    

    
    return 0;
}