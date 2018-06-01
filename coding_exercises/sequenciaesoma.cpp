#include <iostream>

using namespace std;

int main()
{
    int num1, num2,sum = 0, min = 1, max = 1;

    while (cin>>num1 && cin>>num2 && num1 > 0 && num2 > 0)
    {

//        for (int i = 0;i < 2; i++)
//        {

//            if (num == 0) break;

            if (num1 > num2)
            {
                max = num1;
                min = num2;
            }
            else
            {
                max = num2;
                min = num1;
            }
//        }

        for (;min < max; min++)
        {
            cout<<min<<" ";
            sum += min;
        }

        if (num1 == num2) cout<<min<<" ";
        sum += max;
        cout<<max<<" "<<"Sum="<<sum<<endl;
        sum = 0;
    }

}
