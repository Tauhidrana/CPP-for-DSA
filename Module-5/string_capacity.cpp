#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    s = "Hello World";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl; // 10^6
    // cout << s.capacity() << endl;
    // //  s.clear();
    // cout << s << endl;
    // if (s.empty() == true)
    // {
    //     cout << "Empty" << endl;
    // }
    // else
    // {
    //     cout << "Not empty";
    // }
    s.resize(15,'T');
    cout << s  << endl;
    return 0;
}