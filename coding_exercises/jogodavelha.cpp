/*
Isto é um projeto, conceptualizando um jogo da velha. Há dois jogadores, um que
desafia, outro que joga. O projeto usará busca binária, comandos do "sistema",
uma quantidade fixa de erros máximos, uma tela de vitória e uma tela de derrota.
*/

#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

// essa função transforma um stream de caracteres em uma stream no "estilo de senha", mas com os espaços deixados intactos.
string conceal(string a)
{
    #include <string>
    #include <vector>
    string b;
    b = a;

    for (size_t i = 0; i < b.size(); i++)
    {
        if (b[i] != ' ' && b[i] != '-') b[i] = '*';

    }
    return b;
}

int main(int argc, char const *argv[])
{

    string palavra, palavrasearch;
    char guessinput;
    vector<char> guesses;
    string guessedword;

    cout<<"Jogador 1, digite a palavra a ser adivinhada!\n";
    getline(cin,palavra);
    palavrasearch = palavra;
    sort(palavrasearch.begin(), palavrasearch.end()); // essa string vai ser ordenada para permitir busca binária
    guessedword = conceal(palavra);
    system("clear");
    Sleep(1500);

    size_t tentativas = sqrt(guessedword.size() * guessedword.size() + 15);
    for (;tentativas--;)
    {
        cout<<"\nChute uma letra: \n";
        cin>>guessinput; cin.ignore();
        Sleep(1500);
        system("clear");
        while (binary_search(guesses.begin(), guesses.end(), guessinput))
        {
            system("clear");
            cout<<"Você já digitou essa! De novo: \n";
            cin>>guessinput; cin.ignore();
        }
        guesses.push_back(guessinput);
        sort(guesses.begin(), guesses.end());
        Sleep(1500);
        if (binary_search(palavrasearch.begin(), palavrasearch.end(), guessinput))
        {
            tentativas++;
            cout<<"Acertou!\n\n"<<"Você ainda tem "<<tentativas<<" chances.\n\n";
            for (size_t i = 0; i < palavra.size(); i++)
            {
                if (palavra[i] == guessinput)
                {
                    guessedword[i] = palavra[i];
                }
            }
            cout<<guessedword<<endl;
            Sleep(1500);
            if (guessedword == palavra)
            {
                system("clear");
                cout<<"Você venceu!\nA palavra era: "<<guessedword<<"\n"<<"Obrigado por participar!\n";
                Sleep(5000);
                return 0;
            }
        }
        else
        {
            system("clear");
            cout<<"Errou...\n\n"<<"Você ainda tem "<<tentativas<<" chances.\n\n"<<guessedword<<endl;
            Sleep(1500);
        }
    }
    system("clear");
    cout<<"Suas tentativas acabaram! Foi um prazer jogarmos juntos!"<<endl<<"A palavra era: "<<palavra<<endl;
    Sleep(5000);
    return 0;
}

/*
_________
|         |
|         0
|        /|\
|        / \
|
|

*/
