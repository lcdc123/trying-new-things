#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long nc, nt, x , y, pontos = 0; //numero de circulos, numero de tiros, coordenadas dos tiros, soma dos pontos

    cin>>nc>>nt; // lê o número de circulos e numero de tiros

    long long raios[nc]; //vetor com tamanho para conter todos os circulos

    vector<long long> tiros; //vector para conter tiros

    for (size_t i = 0; i < nc; i++)
    {
        cin>>x;
        raios[i] = x*x;
    }

    for (size_t i = 0; i < nt; i++)
    {
        cin>>x>>y;
        tiros.push_back(x*x + y*y );
    }

    sort(tiros.begin() , tiros.end());
    int inicio = 0, fim = nt - 1, meio;

    for (int i = 0; i < nc;)
    {
        meio = ((inicio + fim) / 2);

        if ((tiros[meio] <= raios[i] && meio != fim && tiros[meio + 1] < raios[i] || (tiros[meio] <= raios[i] && tiros[meio] == raios[i])))
        {
            pontos += meio+1;
             i++;
             fim = nt - 1;
        }

        else if (tiros[meio] < raios[i])
        {
            inicio = meio + 1;
        }

        else
        {
            fim = meio - 1;
        }

    }

    cout<<pontos<<endl;

  return 0;
}
