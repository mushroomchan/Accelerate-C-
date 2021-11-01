//
// Created by 陈冬冬 on 2021/11/1.
//
#include <list>
#include <vector>
#include "grade.h"
#include "Student_info.h"

using namespace std;

bool fgrade(const Student_info& s);

typedef list<Student_info> Student_infos;
//typedef vector<Student_info> Student_infos;

// 方法五：使用typedef解决list和vector的选择
Student_infos extract_fails(Student_infos& students)
{
    Student_infos fail;
    Student_infos::iterator iter = students.begin();
    while(iter != students.end())
    {
        if(fgrade(*iter))
        {
            fail.push_back(*iter);
            iter=students.erase(iter);
        }
        else
            iter++;
    }
    return fail;
}

// // 方法四：使用list数据结构代替vector，对删除操作有更好的性能
// list<Student_info> extract_fails(list<Student_info>& students)
// {
//     list<Student_info> fail;
//     list<Student_info>::iterator iter = students.begin();
//     while(iter != students.end())
//     {
//         if(fgrade(*iter))
//         {
//             fail.push_back(*iter);
//             iter=students.erase(iter);
//         }
//         else
//             iter++;
//     }
//     return fail;
// }

// 方法三：在方法二基础上使用迭代器代替索引
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

// 方法二：循环将不及格学生从students删除，增加到fail，对vector进行erase耗时较大
//vector<Student_info> extract_fails(vector<Student_info>& students)
//{
//    vector<Student_info> fail;
//    vector<Student_info>::size_type i =0;
//    while(i!=students.size()) //每次需更新size，因为循环中是会改变的
//    {
//        if(fgrade(students[i]))
//        {
//            fail.push_back(students[i]);
//            students.erase(students.begin()+i);
//        }
//        else
//            i++;
//    }
//    return fail;
//}

// 方法一：需要额外的内存存储students，fail，pass，同时有多个副本，这种情况是不希望发生的
//vector<Student_info> extract_fails(vector<Student_info>& students)
//{
//    vector<Student_info> pass, fail;
//
//    for(vector<Student_info>::size_type i = 0; i!=students.size(); i++)
//    {
//        if (fgrade(students[i]))
//            fail.push_back(students[i]);
//        else
//            pass.push_back(students[i]);
//    }
//    students = pass;
//    return fail;
//}

bool fgrade(const Student_info& s)
{
    return grade(s)<60;
}
