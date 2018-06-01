#include <bits/stdc++.h>

using namespace std;

int main()
{
    int diaini, horaini, minini, segini, diafim, horafim, minfim, segfim, diadur, horadur, mindur, segdur;

    string inutil;

    cin>>inutil>>diaini>>horaini>>inutil>>minini>>inutil>>segini>>inutil>>diafim>>horafim>>inutil>>minfim>>inutil>>segfim;

    diaini *= 86400;
    horaini *= 3600;
    minini *= 60;
    segini += diaini + horaini + minini;

    diafim *= 86400;
    horafim *= 3600;
    minfim *= 60;
    segfim += diafim + horafim + minfim;

    segdur = segfim - segini;

    diadur = segdur / 86400;
    segdur %= 86400;
    horadur = segdur / 3600;
    segdur %= 3600;
    mindur = segdur / 60;
    segdur %= 60;

    cout<<diadur<<" dia(s)\n"<<horadur<<" hora(s)\n"<<mindur<<" minutos(s)\n"<<segdur<<" segundo(s)\n";

}
