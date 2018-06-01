#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    int qtd,total = 0,totalc = 0,totalr = 0,totals = 0; //quantidade de execuções, de cobaias, total ratos, total coelhos, total sapos.
    cin>>qtd;

    for(int i = 0;i < qtd; i++)
    {
        int numcob;
        char tipo;
        cin>>numcob>>tipo;
        total += numcob;
        if (tipo == 'C') totalc += numcob;
        if (tipo == 'R') totalr += numcob;
        if (tipo == 'S') totals += numcob;

    }

    cout<<fixed<<setprecision(2);
    cout<<"Total: "<<total<<" cobaias\n"
    <<"Total de coelhos: "<<totalc<<endl
    <<"Total de ratos: "<<totalr<<endl
    <<"Total de sapos: "<<totals<<endl
    <<"Percentual de coelhos: "<< (totalc / float(total)) * 100<<" %\n"
    <<"Percentual de ratos: "<< (totalr / float(total)) * 100<<" %\n"
    <<"Percentual de sapos: "<< (totals / float(total)) * 100<<" %\n";

}
