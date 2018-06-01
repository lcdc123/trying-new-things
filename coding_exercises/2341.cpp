#include <iostream>
#include <vector>
#define LLONG_MAX 9223372036854775807LL

int main(int argc, char const *argv[])
{
    long long estoque, tipos, embalag;
    std::cin>>estoque>>tipos;
    std::vector<bool> qtdcada[tipos];

    for (size_t i = 0; i < estoque; i++)
    {
        std::cin>>embalag;
        qtdcada[embalag - 1].push_back(true);
    }
    long long menorsize = LLONG_MAX;
    for (size_t i = 0; i < tipos; i++)
    {
        if (qtdcada[i].size() < menorsize)
        {
            menorsize = qtdcada[i].size();
        }
    }
    std::cout<<menorsize<<std::endl;

    return 0;
}
