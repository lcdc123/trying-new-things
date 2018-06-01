#include <iostream>

using namespace std;

int main()
{
    for (int I = 1;I <= 9;I += 2)
    {
        for (int i = 0, j = 7;i < 3; i++)
        {
            cout<<"I="<<I<<" J="<<j - i<<endl;
        }

    }

}
