#include <iostream>

using namespace std;

int main()
{
    int x, sum = 0;

    while(cin>>x && x != 0)
    {
        x += abs(x % 2);

        for (size_t i = 0; i < 10; i+=2)
        {
            sum += x + i;
        }
        cout<<sum<<endl;
        sum = 0;
    }

}
