#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    int gpa;

    Student(int roll, int cls, int gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student rahim(10, 5, 4.7);
    Student *karim = new Student(2, 5, 5.00);
    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << karim->cls << " " << karim->roll << " " << karim->gpa << endl;
    return 0;
}
