#include <stdio.h>

/*��ʾ�ַ������飨�����ʾ�ַ���*/
void put_strary2(const char s[][6], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        int j = 0;
        printf("s[%d] = \"", i);

        while (s[i][j])
            putchar(s[i][j++]);
        puts("\"");
    }
}

int main(void)
{
    char cs[][6] = {"Turbo", "NA", "DOHC"};
    put_strary2(cs, 3);

    return 0;
}