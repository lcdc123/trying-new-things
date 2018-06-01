#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int repeat = 1, golsg, golsi, sumvitg = 0, sumviti = 0, sumemp = 0;

    while(repeat == 1)
    {
        cin>>golsi>>golsg;
        if (golsi > golsg) sumviti += 1;
        else if (golsi < golsg) sumvitg += 1;
        else sumemp += 1;

        repeat = 0;
        while(repeat != 1 && repeat != 2)
        {
            cout<<"Novo grenal (1-sim 2-nao)\n";
            cin>>repeat;
        }

    }

    cout<<sumviti + sumvitg + sumemp<<" grenais\n"<<"Inter:"<<sumviti<<endl<<"Gremio:"<<sumvitg<<endl<<"Empates:"<<sumemp<<endl;
    if (sumviti > sumvitg) cout<<"Inter venceu mais\n";
    else if (sumvitg > sumviti) cout<<"Gremio venceu mais\n";
    else cout<<"Nao houve vencedor\n";

}
