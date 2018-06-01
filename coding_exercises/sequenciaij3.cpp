#include <iostream>

using namespace std;

int main()
{
    for (int I = 1, j = 7;I <= 9;I += 2, j += 2)
    {
        for (int i = 0;i < 3; i++)
        {
            cout<<"I="<<I<<" J="<<j - i<<endl;
        }

    }

}
