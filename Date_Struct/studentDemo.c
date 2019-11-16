//
// Created by edz on 2019/11/9.
//

#include <stdio.h>
#include "student.h"

#define CLASS_SIZE 100

int main() {
    Student grade[CLASS_SIZE];
    Student *studentPArr[CLASS_SIZE] = {0};


    Student zhangsan = {18, Male, 1, "张三"};
    Student lisi = {20, Male, 2, "李四"};
    Student wangwu = {22, Female, 3, "王五"};
    Student zhaoliu = {19, Female, 4, "赵六"};

/*    赋值给指针         */
    studentPArr[0] = &zhangsan;
    studentPArr[1] = &lisi;
    studentPArr[2] = &wangwu;
    studentPArr[3] = &zhaoliu;

/*  赋值给数组           */
//    grade[0] = zhangsan;
//    grade[1] = lisi;
//    grade[2] = wangwu;
//    grade[3] = zhaoliu;
//    printf("hello world");

/*  打印指针  */
//    for (int i = 0; i < CLASS_SIZE; ++i) {
//        if (studentPArr[i] != NULL && studentPArr[i]->num == n)//防止指针指向NULL
//            printf("%d,%s,%s,%d", studentPArr[i]->num, studentPArr[i]->name,
//                   studentPArr[i]->sex == 0 ? "Male" : "Female", studentPArr[i]->age);
//    }

/*  打印数组  */
//    for (int i = 0; i < CLASS_SIZE; ++i) {
//        if (grade[i].num == 2)
//            printf("%d,%s,%s,%d", grade[i].num, grade[i].name,
//                   grade[i].sex == 0 ? "Male" : "Female", grade[i].age);
//    }

    displayStudent(*studentPArr);
    search(studentPArr,2);
    updateStudentByNum(studentPArr,2,"李四",Female,18);
    deleteStudentByNum(studentPArr,2);
    search(studentPArr,3);
    return 0;
}