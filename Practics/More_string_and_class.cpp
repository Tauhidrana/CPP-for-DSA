#include <bits/stdc++.h>
using namespace std;
class People
{

public:
    string name;
    int roll;

    People(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void print()
    {
        cout << name << " " << roll << endl;
    }
};
int main()
{
    People A("Tauhid", 27);
   A.print();

    return 0;
}