#include <stdio.h>

/*���ӣ�����߲���180���˳���180��*/
void hiroko(int *height)
{
    if (*height < 180)
        *height = 180;
}

int main(void)
{
    int sato = 178;/*���ٵ����*/
    int sanaka = 175;/*���е����*/
    int masaki = 179;/*��������*/

    hiroko(&masaki);

    printf("���ٵ����%d\n", sato);
    printf("���е����%d\n", sanaka);
    printf("��������%d\n", masaki);

    return 0;
}