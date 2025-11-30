#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int cnt = 0;
    if (s == "E" || "e" && "g" || "G" && "Y" || "y" && "P" || "p" && "T" || "t")
    {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}