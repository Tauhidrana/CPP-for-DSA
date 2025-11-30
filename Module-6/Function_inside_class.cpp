#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};
int main()
{
    Student sakib("Sakib", 23,99,99);

    sakib.total();
    Student rakib("Rakib", 25,85,98);
    rakib.total();

    return 0;
}