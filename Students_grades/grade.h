//
// Created by 陈冬冬 on 2021/10/7.
//

#ifndef GUARD_GRADE_H
#define GUARD_GRADE_H

#include <vector>
#include "Student_info.h"

double grade(double, double, double );
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

#endif //GUARD_GRADE_H
