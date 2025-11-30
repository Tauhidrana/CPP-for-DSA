#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s = "Hello World";
    // s[5] = 'A';
    // // s += s2; // most use
    // // s.append(s2);
    // // less use
    // //     s.push_back('A');
    // s += 'A';
    // s.pop_back();
    // s.pop_back();
    // string s2 = "Hi";
    // s = s2; // Most use
    // s.assign("Gello"); Less use
    // s.erase(3, 2);
    // s.replace(6,0,"Bangladesh");
    s.insert(5,"Tauhid");
    cout << s << endl;
    return 0;
}