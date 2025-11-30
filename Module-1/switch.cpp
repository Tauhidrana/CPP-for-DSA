#include <iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Sat\n";
        break;
    case 2:
        cout << "sun\n";

        break;
    case 3:
        cout << "Mon\n";
        break;
    case 4:
        cout << "Tuse\n";
        break;
    case 5:
        cout << "Wed\n";
        break;
    case 6:
        cout << "Thu\n";
        break;
    case 7:
        cout << "Fri\n";
        break;
        default:
        cout<< "worng input";
    }
    return 0;
}