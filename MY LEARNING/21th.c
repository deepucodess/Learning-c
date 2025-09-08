// #include <stdio.h>

// int main() {
//     int  marks1, marks2, marks3;
//     printf("tell me ur first subject marks");
//     scanf("%d",&marks1);
//     printf("tell me ur second subject marks");
//     scanf("%d",&marks2);
//     printf("tell me ur third subject marks");
//     scanf(" %d",&marks3);

//     if(marks1<33 || marks2<33|| marks3<33){
//         printf("u are fail because u have less than 33 marks in indiviual subjects\n");
//     }
//     if((marks1+marks2+marks3)/3 < 40){
//         printf("u are fail because u dont have 40% marks in all combined subject \n");
//     }
//     else{
//         printf("U GOT IT SON ");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int  marks1, marks2, marks3;
    printf("tell me ur first subject marks");
    scanf("%d",&marks1);
    printf("tell me ur second subject marks");
    scanf("%d",&marks2);
    printf("tell me ur third subject marks");
    scanf(" %d",&marks3);

    if(marks1<33 || marks2<33|| marks3<33||(marks1+marks2+marks3)/3 < 40){
        printf("u are fail because u have less than 33 marks in indiviual subjects\n");
    }
    
    else{
        printf("U GOT IT SON ");
    }
    return 0;
}