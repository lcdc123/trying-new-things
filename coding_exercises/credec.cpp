#include <iostream>

using namespace std;

int main()
{
    int num1,num2;

    while (cin>>num1 && cin>>num2 && num1 != num2)
    {
        if (num1 > num2)
        {
            cout<<"Decrescente\n";
        }

        else cout<<"Crescente\n";

    }

}
