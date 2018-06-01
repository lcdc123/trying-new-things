#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    size_t n, entrada;
    cin>>n;
    vector<size_t> proibidos(n);

    for (size_t i = 0; i < n; i++)
    {
        cin>>proibidos[i];
    }

    sort(proibidos.begin() , proibidos.end());


    while (cin>>entrada)
    {
        int inicio = 0, fim = n - 1, meio;
        while (inicio <= fim)
        {
            meio = (inicio + fim) / 2;

            if (proibidos[meio] == entrada) break;

            else if (proibidos[meio] < entrada) inicio = meio + 1;

            else fim = meio - 1;
        }

        if(proibidos[meio] != entrada) cout << "nao\n";
        else cout << "sim\n";

    }

    return 0;
}
