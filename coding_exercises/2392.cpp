#include <iostream>

int main(int argc, char const *argv[])
{
    int npedra,nsapo, posapo, pulo, j;
    std::cin>>npedra>>nsapo;
    bool possib[npedra];

    for (size_t i = 0; i < npedra; i++)
    {
        possib[i] = false;
    }

    for (size_t i = 0; i < nsapo; i++)
    {
        std::cin>>posapo>>pulo;
        for (j = posapo - 1; j < npedra; j+=pulo)
        {
            possib[j] = true;
        }
        for (j = posapo - 1; j >= 0; j-=pulo)
        {
            possib[j] = true;
        }
    }

    for (size_t i = 0; i < npedra; i++)
    {
        std::cout<<possib[i]<<std::endl;
    }

    return 0;
}
