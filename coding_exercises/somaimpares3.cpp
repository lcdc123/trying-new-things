#include <iostream>

using namespace std;

int main()
{

    int qtd,num1,count,soma = 0;
    cin>>qtd;

    for (int j = 0;j < qtd;j++)
    {
        cin>>num1>>count;

        if (num1 % 2 == 0) num1++;

        for (int i = 0;i < count; i++)
        {
            soma += num1;
            num1 += 2;
        }
        
        cout<<soma<<endl;
        soma = 0;
    }
}
