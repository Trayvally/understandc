//
// Created by edz on 2019/11/9.
//

#include <stdlib.h>
#include <string.h>

#ifndef DATE_STRUCT_STUDENT_H
#define DATE_STRUCT_STUDENT_H

#endif //DATE_STRUCT_STUDENT_H


#define NAME_LEN 20
enum Gender{Male,Female,Invalid};

typedef enum Gender GENDER;

typedef struct Student
{
    int age;
    GENDER sex;
    int num;
    char name[NAME_LEN];
}Student;

/**
 * 根据传入的参数创建一个学生结构对象
 * @param age
 * @param name
 * @param num
 * @return
 */
Student * createStudent(int age,GENDER,char *name,int num);

void displayStudent(Student *);

/**
 * 根据学号查询学生
 */
Student *search(Student *[],int num);

/**
 * 根据学号更新学生信息
 * @param student
 */
void updateStudentByNum(Student *[],int num,char name[],GENDER sex,int age);

/**
 * 根据学号删除学生信息
 * @param student
 */
void deleteStudentByNum(Student *[],int num);