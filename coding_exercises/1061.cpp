#include <bits/stdc++.h>

using namespace std;

int main()
{
    int diaini, horaini, minini, segini, diafim, horafim, minfim, segfim, diadur, horadur, mindur, segdur;

    string inutil;

    cin>>inutil>>diaini>>horaini>>inutil>>minini>>inutil>>segini>>inutil>>diafim>>horafim>>inutil>>minfim>>inutil>>segfim;

    diadur = diafim - diaini;

    if ((horaini > horafim) or (horaini == horafim && minini > minfim))
    {
        horadur = horafim + 24 - horaini;
        diadur--;

        if ((minini > minfim) or (minini == minfim && segini > segfim))
        {
            mindur = minfim + 60 - minini;
            horadur--;

            if (segini > segfim)
            {
                mindur--;
                segdur = segfim + 60 - segini;
            }

            else segdur = segfim - segini;

        }

        else
        {
            mindur = minfim - minini;

            if (segini > segfim)
            {
                mindur--;
                segdur = segfim + 60 - segini;
            }

            else segdur = segfim - segini;

        }

    }

    else
    {
        horadur = horafim - horaini;

        if ((minini > minfim) or (minini == minfim && segini > segfim))
        {
            mindur = minfim + 60 - minini;
            horadur--;

            if (segini > segfim)
            {
                mindur--;
                segdur = segfim + 60 - segini;
            }

            else segdur = segfim - segini;

        }

        else
        {
            mindur = minfim - minini;

            if (segini > segfim)
            {
                mindur--;
                segdur = segfim + 60 - segini;
            }

            else segdur = segfim - segini;

        }

    }

    cout<<diadur<<" dia(s)\n"<<horadur<<" hora(s)\n"<<mindur<<" minutos(s)\n"<<segdur<<" segundo(s)\n";

}
