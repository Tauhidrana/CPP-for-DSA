#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string S, T;
        cin >> S >> T;

        string ans = "";
        int lenS = S.size();
        int lenT = T.size();
        int mx = max(lenS, lenT);

        for (int i = 0; i < mx; i++)
        {
            if (i < lenS)
                ans += S[i];
            if (i < lenT)
                ans += T[i];
        }

        cout << ans << "\n";
    }

    return 0;
}
