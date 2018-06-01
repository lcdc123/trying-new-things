#include <iostream>

using namespace std;

int main()
{
    int comb,alc = 0,gas = 0,die = 0;

    while (cin>>comb && comb =! 4)
    {
        if (comb == 1) alc++;
        if (comb == 2) gas++;
        if (comb == 3) die++;
    }
    cout<<"MUITO OBRIGADO\n"<<"Alcool: "<<alc<<endl<<"Gasolina: "<<gas<<endl<<"Diesel: "<<die<<endl;

    // programa muito muito simples, tenho medo de passar como "cópia".
}
