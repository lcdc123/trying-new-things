#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string raven;
    vector<int> numeros;
    int binary = 0, digitos[3];
    /* foram declaradas variáveis para: armazenar a entrada (tudo que entra são strings), guardar os numeros binarios
    para a soma a cada "grito" ("caw caw"), transformar cada entrada em binário e guardar as somas para a saída no fim. */
    for (size_t i = 0; i < 3;)
    {
        getline(cin,raven);
        if (raven == "caw caw")
        {
            cout<< accumulate(numeros.begin(), numeros.end(), 0) << endl;
            i++;
            numeros.clear();
        }

        else
        {
            if (raven[0] == '*') binary += 4;
            if (raven[1] == '*') binary += 2;
            if (raven[2] == '*') binary += 1;
            numeros.push_back(binary);
            binary = 0;

        }

    }

    return 0;
}
