#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // Student(int r, int c, int g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
};

int main()
{
    Student rahim;

    cin>>rahim.roll>>rahim.cls>>rahim.gpa;

   
    // Student karim(r,c,g);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    // cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}