#include <iostream>

using namespace std;

int main()
{

    int count;
    cin>>count;

    for(int i = 1;i <= count; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<i<<" "<<(i*i)+j<<" "<<(i*i*i)+j<<endl;
        }

    }

}
