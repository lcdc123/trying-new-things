#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<fixed<<setprecision(0);
    for (float I = 0, j = 1;I <= 2.05;I += 0.2, j += 0.2)
    {
        if (I > 1.95 && I < 2.05 || I > 0.95 && I < 1.05)
        {
            cout<<fixed<<setprecision(0);
        }
        for (int i = 0;i < 3; i++)
        {
            cout<<"I="<<I<<" J="<<j + i<<endl;
        }
        cout<<fixed<<setprecision(1);
    }

}
