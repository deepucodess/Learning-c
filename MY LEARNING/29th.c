#include <stdio.h>

int main() {
    int i = 10;
    int table = 10;
    while (i>=1)
    {
        printf("%d X %d =%d\n",table,i,table*i);
        i--;
    }
    
    return 0;
}