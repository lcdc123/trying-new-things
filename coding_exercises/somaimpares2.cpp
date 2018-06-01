#include <iostream>

using namespace std;

int main()
{

    int qtd,num1,num2,min,max,i,soma = 0;
    cin>>qtd;

    for (int j = 0;j < qtd;j++)
    {
        cin>>num1>>num2;
        max = (num1 + num2 + abs(num1-num2))/2; /*fórmula que tira a média de dois números, soma com a metade da diferença entre eles.
        Essa operação sempre retorna o maior número entre eles */
        if (max == num1) min = num2; // atribui o menor dos dois números à variável "min".
        else min = num1;
        //                       cout<<"Min: "<<min<<endl<<"Max: "<<max<<endl;
        min++;
        i = min - min % 2; //retorna o próximo número par do mínimo, ou o mínimo, se o mesmo for par.
        //                        cout <<"i: "<< i<<endl;
        i++;
        for (;i < max; i += 2)
        {
            soma += i;
        }
        cout<<soma<<endl;
        soma = 0;
    }
}
