#include <stdio.h>
#include "student.h"

Student *createStudent(int age, GENDER gender, char *name, int num) {
    Student *rlt = (Student *) malloc(sizeof(Student));
    strcpy(rlt->name, name);
    rlt->age = age;
    rlt->sex = gender;
    rlt->num = num;

    return rlt;
}

void displayStudent(Student *stu) {
    printf("%d,%s,%s,%d\n", stu->num, stu->name,
           stu->sex == 0 ? "Male" : "Female", stu->age);
}

Student *search(Student *stu[], int num) {
    for (int i = 0; stu[i] != NULL; ++i) {
        if (stu[i]->num == num)
            printf("%s\n", stu[i]->name);
    }
}

void updateStudentByNum(Student *stu[], int num, char name[], GENDER sex, int age) {
    strcpy(stu[num-1]->name, name);
    stu[num-1]->age = age;
    stu[num-1]->sex = sex;
    printf("%d,%s,%s,%d\n", stu[num-1]->num, stu[num-1]->name,
           stu[num-1]->sex == 0 ? "Male" : "Female", stu[num-1]->age);
}

void deleteStudentByNum(Student *stu[], int num) {
    for (int i = 0; stu[i] != NULL; ++i) {
        if (stu[i]->num == num) {
            for (int j = i; stu[j] !=NULL ; ++j) {
                strcpy(stu[j]->name, stu[j + 1]->name);
                stu[j]->age = stu[j + 1]->age;
                stu[j]->sex = stu[j + 1]->sex;
                stu[j]->num = (j + 1);
                printf("%d,%s,%s,%d\n", stu[j]->num, stu[j]->name,
                       stu[j]->sex == 0 ? "Male" : "Female", stu[j]->age);
            }
        }
    }
}



