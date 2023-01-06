#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "list.h"

typedef struct {
    char  *name;
    int age;
} Employee;

int compareEmployee(Employee *e1, Employee *e2);
void displayEmployee(Employee* employee);

#endif