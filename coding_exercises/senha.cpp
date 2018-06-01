#include <iostream>
#include <string>

using namespace std;

int main()
{
    string senha;

    while (getline(cin,senha) && senha != "Gustavo eh corno")
    {
        cout<<"Senha Invalida\n";

    }
    cout<<"Precisamente negão, pode passa\n";
}
