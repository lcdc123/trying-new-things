#include <string>
#include <iostream>

using namespace std;

int main()
{
    int count, num1, num2;
    string nome1, choice1, nome2, choice2;
    cin>>count;

    for (;count--;)
    {
        cin>>nome1>>choice1>>nome2>>choice2>>num1>>num2;

        if (choice1 == "IMPAR")
        {
            if ((num1 + num2) % 2 == 1) cout<<nome1<<endl;
            else cout<<nome2<<endl;
        }
        else if (choice1 == "PAR")
        {
            if ((num1 + num2) % 2 == 0) cout<<nome1<<endl;
            else cout<<nome2<<endl;
        }


    }

}
