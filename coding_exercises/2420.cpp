#include <iostream>

int main(int argc, char const *argv[])
{
    int num, soma = 0, meio = 0, k = 0;
    std::cin>>num;
    int sections[num];

    for (size_t i = 0; i < num; i++)
    {
        std::cin>>sections[i];
        soma += sections[i];
    }
    soma /= 2;
    for (; k < num; k++)
    {
        meio += sections[k];
        if (meio == soma)
            break;
    }

    std::cout<<k+1<<'\n';




    return 0;
}
