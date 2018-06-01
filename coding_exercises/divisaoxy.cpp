#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int qtd, x, y;
    cin>>qtd;
    cout<<fixed<<setprecision(1);
    for(int i = 0; i < qtd; i++)
    {
        cin>>x>>y;
        if (y == 0) cout<<"divisao impossivel\n";
        else cout<< ((double)x) / (double)y << endl;

    }

}
