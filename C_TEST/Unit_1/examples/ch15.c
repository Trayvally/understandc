#include <stdio.h>

int main(void)
{
    int width;
    int height;

    puts("�󳤷��ε������");

    printf("��: ");
    scanf("%d", &width);

    printf("��: ");
    scanf("%d", &height); 

    /* ��ʾ */
    printf("����� %d��\a\n", width * height); 

    return 0;
}