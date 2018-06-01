#include <iostream>

using namespace std;

int main()
{

    int num1,num2,min,max;
    cin>>num1>>num2;
    max = (num1 + num2 + abs(num1-num2))/2; /*fórmula que tira a média de dois números, soma com a metade da diferença entre eles.
    Essa operação sempre retorna o maior número entre eles */
    if (max == num1) min = num2; // atribui o menor dos dois números à variável "min".
    else min = num1;

    for (int i = min + 1; i < max; i++)
    {
        if (i % 5 == 2 || i % 5 == 3) cout<<i<<endl;
    }

}
