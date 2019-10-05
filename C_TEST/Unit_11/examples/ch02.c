#include <stdio.h>

int main(void)
{
    char s[] = "ABC";
    printf("s = \"%s\"\n", s);
    s = "DEF";/*³ö´í*/
    printf("s = \"%s\"\n", s);
    return 0;
}