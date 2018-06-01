#include <iostream>

int main(int argc, char const *argv[])
{
    int P = 1, R = 1, counter = 0;
    while (P != 0 || R != 0)
    {
        counter++;
        std::cin>>P>>R;
        int sequencia[P], tamanhoatual;
        bool pos[P], ordem;

        for (size_t i = 0; i < P; i++)
        {
            std::cin>>sequencia[i];
        }

        for (size_t i = 0; i < R; i++)
        {
            std::cin>>tamanhoatual>>ordem;
            for (size_t k = 0, j = 0; k < tamanhoatual; k++, j++)
            {
                std::cin>>pos[j];
                while (sequencia[j] == 0 && j + 1 < P) // se já foi eliminado e não vai estourar o vetor, pula a posição
                {
                    j++;
                    pos[j] = pos[j-1];
                }
                if (pos[j] != ordem)
                {
                    sequencia[j] = 0;
                }
            }
        }
        int winner = 0;
        for (;winner < P; winner++)
        {
            if (sequencia[winner])
            {
                std::cout<<"Teste "<<counter<<std::endl
                <<sequencia[winner]<<std::endl<<std::endl;
                break;
            }
        }


    }

    return 0;
}
