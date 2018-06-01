#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float nota1, nota2;

    while (cin>>nota1 && nota1 < 0 || nota1 > 10)   // enquanto a nota não for válida
    {
        cout<<"nota invalida\n";
    }
    while (cin>>nota2 && nota2 < 0 || nota2 > 10)   // enquanto a nota não for válida
    {
        cout<<"nota invalida\n";
    }

    cout<<fixed<<setprecision(2)<<"media = "<<(nota1 + nota2) / 2<<endl;

}
