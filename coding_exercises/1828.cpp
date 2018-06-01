#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int qtty;

    string s, r;

    cin>>qtty;

    for (int i = 1;i <= qtty;i++)
    {
        cin>>s>>r;
        if (s == r)
        {
            cout<<"Caso #"<<i<<": De novo!\n";
        }

        else if (s == "tesoura")
        {
            if (r == "pedra" || r == "Spock") cout<<"Caso #"<<i<<": Raj trapaceou!\n";
            else cout<<"Caso #"<<i<<": Bazinga!\n";
        }

        else if (s == "pedra")
        {
            if (r == "Spock" || r == "papel") cout<<"Caso #"<<i<<": Raj trapaceou!\n";
            else cout<<"Caso #"<<i<<": Bazinga!\n";
        }

        else if (s == "papel")
        {
            if (r == "tesoura" || r == "lagarto") cout<<"Caso #"<<i<<": Raj trapaceou!\n";
            else cout<<"Caso #"<<i<<": Bazinga!\n";
        }

        else if (s == "lagarto")
        {
            if (r == "tesoura" || r == "pedra") cout<<"Caso #"<<i<<": Raj trapaceou!\n";
            else cout<<"Caso #"<<i<<": Bazinga!\n";
        }

        else if (s == "Spock")
        {
            if (r == "lagarto" || r == "papel") cout<<"Caso #"<<i<<": Raj trapaceou!\n";
            else cout<<"Caso #"<<i<<": Bazinga!\n";
        }
    }



    return 0;
}
