#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, odd = 0, even = 0;
    vector<int> impar, par;

    for (size_t j = 0; j < 15; j++)
    {
        cin>>x;
        if (x % 2 == 0)
        {
            par.push_back(x);

            if (par.size() == 5)
            {
                for (size_t i = 0; i < 5; i++)
                {
                    cout<<"par["<<i<<"] = "<<par[i]<<endl;

                }
                par.clear();
            }
        }

        if (x % 2 != 0)
        {
            impar.push_back(x);
            if (impar.size() == 5)
            {
                for (size_t i = 0; i < 5; i++)
                {
                    cout<<"impar["<<i<<"] = "<<impar[i]<<endl;

                }
                impar.clear();
            }
        }

    }

    for (size_t k = 0; k < impar.size() ; k++)
    {
        cout<<"impar["<<k<<"] = "<<impar[k]<<endl;

    }

    for (size_t k = 0; k < par.size() ; k++)
    {
        cout<<"par["<<k<<"] = "<<par[k]<<endl;

    }


}
