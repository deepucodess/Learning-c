#include <stdio.h>
int main()
{
    char ch;
    int b;
    float a;

    printf("ch occupied %zu, size of char = %zu\n", sizeof(ch), sizeof(char));
    printf("b occupied %zu, size of int = %zu\n", sizeof(b), sizeof(int));
    printf("a occupied %zu, size of float = %zu\n", sizeof(a), sizeof(float));

    return 0;
}
