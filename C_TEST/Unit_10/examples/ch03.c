#include <stdio.h>

int main(void)
{
    int sato = 178;/*���ٵ����*/
    int sanaka = 175;/*���е����*/
    int masaki = 179;/*��������*/

    int *isako, *hiroko;

    isako = &sato;/*isakoָ��sato��ϲ�����٣�*/
    hiroko = &masaki;/*hirokoָ��masaki��ϲ�����飩*/

    printf("��ɳ��ϲ�����˵����%d\n", *isako);
    printf("����ϲ�����˵����%d\n", *hiroko);

    isako = &sanaka;/*isakoָ��sanaka�����������*/

    *hiroko = 180;/*��hirokoָ��Ķ���ֵΪ180*/

    putchar('\n');
    printf("���ٵ����%d\n", sato);
    printf("���е����%d\n", sanaka);
    printf("��������%d\n", masaki);
    printf("��ɳ��ϲ�����˵����%d\n", *isako);
    printf("����ϲ�����˵����%d\n", *hiroko);

    return 0;
}