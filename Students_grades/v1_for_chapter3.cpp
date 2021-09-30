#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> names;
    vector<double> grades;
    int student_number;
    cout<<"Please enter number of students: ";
    cin >> student_number;

    for(int i=0; i<student_number; i++)
    {
        cout<<"Please enter name of student "<<i+1<< ": ";
        string name;
        cin>>name;
        names.push_back(name);
    
        cout<<"Please enter your homework grades, midterm and final exam grades: ";
        double homework,midterm, final;
        cin >> homework >> midterm >> final;

        streamsize prec = cout.precision();
        double grade = 0.2*midterm+0.4*final+0.4*homework;
        grades.push_back(grade);
    }
    
    for(vector<string>::size_type i = 0; i < names.size(); i++)
        cout<<"name: "<<names[i]<<" ,total grade: "<<grades[i]<<endl;
    return 0;
}