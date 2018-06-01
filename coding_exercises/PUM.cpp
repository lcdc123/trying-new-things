#include <iostream>

using namespace std;

int main()
{
    int count, j = 0;
    cin>>count;

    for (int i = 0;i < count*4;i += 4)
    {
            cout<<i+1<<" "<<i+2<<" "<<i+3<<" PUM\n";
    }
    return 0;
}
