#include <iostream>

using namespace std;

int main()
{
    long long count, metade, number, sum = 0;
    cin>>count;

    for (size_t i = 0; i < count; i++)
    {
        cin>>number;
        metade = (number / 2) + 1;
        for (long long j = 1; j <= metade; j++)
        {
            if (number % j == 0) sum += j;
        }
        if (sum == number) cout<<number<<" eh perfeito\n";
        else cout<<number<<" nao eh perfeito\n";
        sum = 0;
    }

}
