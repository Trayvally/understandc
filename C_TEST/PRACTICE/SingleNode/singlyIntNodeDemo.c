//
// Created by edz on 2019/11/16.
//

#include "singlyIntNode.h"

int main(void){

    SinglyIntNode *node = singlyIntNodeCreate();
    singlyIntNodeAdd(node,1);
    singlyIntNodeAdd(node,2);
    singlyIntNodeAdd(node,3);
    singlyIntNodeAdd(node,4);
    singlyIntNodeAdd(node,3);
    singlyIntNodeAdd(node,4);
    singlyIntNodeDisplay(node);
    singlyIntNodeDelete(node,3);
    singlyIntNodeDisplay(node);
    singlyIntNodeDeleteElem(node,3);
    singlyIntNodeDisplay(node);
    singlyIntNodeRevert(node);
    singlyIntNodeDisplay(node);
    singlyIntNodeUpdate(node,3,2);
    singlyIntNodeDisplay(node);
    singlyIntNodeInsert(node,4,7);
    singlyIntNodeDisplay(node);
    singlyIntNodeGet(node,4);
    singlyIntNodeDisplay(node);
    return 0;
}