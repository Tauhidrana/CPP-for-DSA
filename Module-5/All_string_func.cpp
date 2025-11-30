#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello world";
    // string Capacity
    cout << s.size() << endl;
    cout << s.capacity() << endl;
    cout << s.max_size() << endl;
    // s.clear();
    cout << "Is string is empty:" << " " << (s.empty() ? "Yes" : "No") << endl;
    s.resize(10);
    cout << "After resize string:" << " " << s.size() << endl;
    // string elament access
    cout << "String's 2th elament:" << " " << s[2] << endl;
    cout << "String's 3th elament:" << " " << s.at(3) << endl;
    cout << "Last elament of string:" << " " << s.back() << endl;
    cout << "First elament of string:" << " " << s.front() << endl;
    s.append(" Tauhid");
    cout << s << endl;
    s.push_back('!');
    cout << s << endl;
    s.pop_back();
    cout << s << endl;
    s.erase(8, 6);
    cout << s << endl;
    s.replace(0, 7, "Replaced");
    cout << s << endl;
    s.insert(8, "string");
    cout << s << endl;
    // string iterators
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    // string input with spece
    string s3;

    getline(cin, s3);
    cout << s3 << endl;
    // Stringstream

    stringstream rt(s);
    string word;
    while (rt >> word)
    {
        cout << word << endl;
    }

    return 0;
}