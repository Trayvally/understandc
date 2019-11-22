//
// Created by edz on 2019/11/16.
//

#include "singlyIntNode.h"

SinglyIntNode *singlyIntNodeCreate() {
    SinglyIntNode *node = (SinglyIntNode *) malloc(sizeof(SinglyIntNode));
    node->next = NULL;//循环结尾用NULL作为判断标志，为了防止next指向未知的东西。
    node->value = 0;
    return node;
}

void singlyIntNodeAdd(SinglyIntNode *head, int elem) {
    for (; head != NULL; head = head->next) {

        if (head->next == NULL) {

            SinglyIntNode *node = singlyIntNodeCreate();
            head->next = node;
            node->value = elem;
            node->next = NULL;
            break;
        }
    }

}

void singlyIntNodeDisplay(const SinglyIntNode *node) {
    for (int i = 0; node != NULL; node = node->next) {
        printf("s[%d]=%d ", i, node->value);
        i++;
        if((i+1)%10==0)
            printf("\n");
    }
    printf("\n");
}

int singlyIntNodeDelete(SinglyIntNode *list, int index) {
    for (int i = 1; i < index ; ++i) {
        list = list->next;
        if(list==NULL){
            printf("index不合法,删除失败\n");
            return 0;
        }
    }//位于删除位前一位
    list->next = list->next->next;
    printf("\n");
    return 1;
}

int singlyIntNodeDeleteElem(SinglyIntNode *list, int elem) {
    for (; list != NULL; list = list->next) {
        if (list->next->value == elem) {
            list->next = list->next->next;
            printf("Delete successfully!\n");
            return 1;
        }
    }
    printf("don't find the elem\n");
    return 0;
}

void singlyIntNodeRevert(SinglyIntNode *list){

        SinglyIntNode *p,*q,*pr;
        p =list->next;
        q = NULL;
        list->next = NULL;
        while(p){
            pr = p->next;
            p->next = q;
            q = p;
            p = pr;
        }
        list->next = q;
}


int singlyIntNodeInsert(SinglyIntNode *list, int index, int elem){
    for (int i = 0; i < index-1 ; ++i) {
        list = list->next;
    }//位于插入位前一位
    SinglyIntNode *node = singlyIntNodeCreate();
    node->next=list->next;
    list->next = node;
    node->value = elem;
    return 1;
}


int singlyIntNodeUpdate(SinglyIntNode *list, int index, int elem){
    for (int i = 0; i < index ; ++i) {
        list = list->next;
    }
    list->value=elem;
    return 1;
}

int singlyIntNodeGet(SinglyIntNode *list, int index){
    for (int i = 0; i < index ; ++i) {
        list = list->next;
    }
    printf("s[%d]=%d\n",index,list->value);
}

void singlyIntNodeSerializeB(SinglyIntNode *list, FILE *file){

}