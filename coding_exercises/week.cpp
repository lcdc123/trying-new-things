#include <bits/stdc++.h>

using namespace std;

int main()
{
    string week[7] = {"Sunday\n", "Monday\n", "Tuesday\n", "Wednesday\n", "Thursday\n", "Friday\n", "Saturday\n"};
    int day;
    cin>>day;
    day %= 7;
    switch (day)
    {
        case 0:
            cout<<week[6];
            break;
        case 1:
            cout<<week[0];
            break;
        case 2:
            cout<<week[1];
            break;
        case 3:
            cout<<week[2];
            break;
        case 4:
            cout<<week[3];
            break;
        case 5:
            cout<<week[4];
            break;
        case 6:
            cout<<week[5];
            break;

    }
}
