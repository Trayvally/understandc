#include <stdio.h>

/*���ַ���s���Ƶ�d*/
void str_copy(char *d, const char *s)
{
    while (*d++ = *s++)
        ;
}

int main(void)
{
    char *ptr = "1234";
    char tmp[128];
    printf("ptr = \"%s\"\n", ptr);

    printf("���Ƶ��ǣ�");
    scanf("%s", tmp);

    str_copy(ptr, tmp);

    puts("�����ˡ�");
    printf("ptr = \"%s\"\n", ptr);

    return 0;
}
}