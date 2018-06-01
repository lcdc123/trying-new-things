#include <iostream>

int main(int argc, char const *argv[])
{
    int tamanho;
    std::cin>>tamanho;
    bool tabuleiro[tamanho];
    int vizinhos[tamanho];
    for (size_t i = 0; i < tamanho; i++)
    {
        vizinhos[i] = 0;
    }

    for (size_t i = 0; i < tamanho; i++)
    {
        std::cin>>tabuleiro[i];
    }

    int check = tamanho - 1;
    for (size_t i = 0; i < tamanho; i++)
    {
                                                                /*        if (i && tabuleiro[i-1] == true)
                                                                            vizinhos[i]++;
                                                                        if(tabuleiro[i] == true)
                                                                            vizinhos[i]++;
                                                                        if(i < check && tabuleiro[i+1] == true)
                                                                            vizinhos[i]++;
                                                                */
        if (tabuleiro[i])
        {
            vizinhos[i]++;
            if (i)
                vizinhos[i-1]++;
            if (i < check)
                vizinhos[i+1]++;
        }
    }

    for (size_t i = 0; i < tamanho; i++)
    {
        std::cout<<vizinhos[i]<<'\n';
    }

    return 0;
}
