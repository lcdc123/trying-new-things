#include <iostream>

using namespace std;

int main()
{
    long long count, metade, number, sum = 0;
    cin>>count;

    for (size_t i = 0; i < count; i++)
    {
        cin>>number;

        for (long long j = 1; j <= number; j++)
        {
            if (number % j == 0) sum += j;
        }
        if (sum == number + 1) cout<<number<<" eh primo\n";
        else cout<<number<<" nao eh primo\n";
        sum = 0;
    }

}
