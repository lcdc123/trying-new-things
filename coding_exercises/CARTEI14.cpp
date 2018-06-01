#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long numc, nume, pos = 0, tempo = 0;
    cin>>numc>>nume;
    long long casas[numc], ender[nume];

    for (size_t i = 0; i < numc; i++) cin>>casas[i];
    for (size_t i = 0; i < nume; i++) cin>>ender[i];

    for (int i = 0; i < nume; i++)
    {
        long long inicio = 0, fim = numc - 1, meio;
        while (inicio <= fim)
        {
            meio = (inicio + fim) / 2;
            if ( casas[meio] == ender[i] )
            {
                tempo += abs(meio - pos);
                pos = meio;
                break;
            }

            else if (casas[meio] < ender[i])
            {
                inicio = meio + 1;
            }

            else if (casas[meio] > ender[i])
            {
                fim = meio - 1;
            }

        }

    }
    cout<<tempo<<endl;

    return 0;
}
