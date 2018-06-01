#include <iostream>
#include <iomanip>


int main()
{
    int repeat = 1;
    std::ios_base::sync_with_stdio(false);
    while(repeat == 1)
    {
        float nota1, nota2;

        while (std::cin>>nota1 && nota1 < 0 || nota1 > 10)   // enquanto a nota não for válida
        {
            std::cout<<"nota invalida\n";
        }
        while (std::cin>>nota2 && nota2 < 0 || nota2 > 10)   // enquanto a nota não for válida
        {
            std::cout<<"nota invalida\n";
        }

        std::cout<<std::fixed<<std::setprecision(2)<<"media = "<<(nota1 + nota2) / 2<<endl;
        repeat = 0;
        while(repeat != 1 && repeat != 2)
        {
            std::cout<<"novo calculo (1-sim 2-nao)\n";
            std::cin>>repeat;
        }

    }
}
