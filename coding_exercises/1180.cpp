#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long tam, menor = 9223372036854775806, num;
    vector<long long> variaveis;
    cin>>tam;

    for (size_t i = 0; i < tam; i++)
    {
        cin>>num;
        variaveis.push_back(num);
    }

    for (size_t i = 0; i < tam; i++)
    {
        if (variaveis[i] < menor)
        {
            menor = variaveis[i];
            num = i;

        }

    }

    cout<<"Menor valor: "<<menor<<endl<<"Posicao: "<<num<<endl;

}
