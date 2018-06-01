#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long qtd, city1, city2, i;
    double rate1, rate2;

    cin>>qtd;

    for (size_t j = qtd; j-- ;)
    {
        cin>>city1>>city2>>rate1>>rate2;
        rate1 += 100; rate1 /= 100;
        rate2 += 100; rate2 /= 100;
        for (i = 0; city1 <= city2 && i < 100; i++)
        {
            city1 *= rate1;
            city2 *= rate2;
        }
        if (city1 > city2)  cout<<i<<" anos.\n";
        else cout<<"Mais de 1 seculo.\n";

    }

}
