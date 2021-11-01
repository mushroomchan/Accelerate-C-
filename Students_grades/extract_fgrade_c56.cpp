//
// Created by 陈冬冬 on 2021/11/1.
//
#include <list>
#include <vector>
#include "grade.h"
#include "Student_info.h"

using namespace std;

bool fgrade(const Student_info& s);

// 新方法：复制-resize
vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::iterator iter = students.begin();
    vector<Student_info>::iterator newend = students.begin();
    int cnt = 0;
    while(iter!=students.end()) //需要每次更新end迭代器，因为vector在循环中会改变
    {
        if(fgrade(*iter)) //不及格
        {
            fail.push_back(*iter);
        }
       else  //及格
        {
            if(iter != newend)
                *newend = *iter;
            newend++;
            cnt++;
        }
        iter++;
    }
    students.resize(cnt);
    return fail;
}


// 旧方法：直接删除
//vector<Student_info> extract_fails(vector<Student_info>& students)
//{
//    vector<Student_info> fail;
//    vector<Student_info>::iterator iter = students.begin();
//    while(iter!=students.end()) //需要每次更新end迭代器，因为vector在循环中会改变
//    {
//        if(fgrade(*iter))
//        {
//            fail.push_back(*iter);
//            iter = students.erase(iter);
//        }
//        else
//            iter++;
//    }
//    return fail;
//}



bool fgrade(const Student_info& s)
{
    return grade(s)<60;
}
