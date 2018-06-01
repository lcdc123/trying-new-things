#include <iostream>

using namespace std;

int main()
{
    int number, metade;
    cin>>number;
    metade = number / 2;
        for (int i = 1; i <= metade; i++)
        {
            if (number % i == 0) cout<<i<<endl;
        }

        cout<<number<<endl;


}
