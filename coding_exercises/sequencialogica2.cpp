#include <iostream>

using namespace std;

int main()
{

    int count,fim;
    cin>>count>>fim;

    for(int i = 0; i < fim; i += count)
    {
        cout<<i+1;
        for(int j = 1; j < count; j++)
        {
            if ((i + j + 1) > fim)
            {
                break;
            }
            cout<<" "<<i+j+1;

        }
        cout<<endl;
    }

}
