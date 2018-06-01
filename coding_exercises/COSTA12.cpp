#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    int w, h, coastline = 0;
    cin>>w>>h;

    char mapa[w][h];

    for (size_t i = 0; i < w; i++)
    {
        for (size_t j = 0; j < h; j++)
        {
            cin>>mapa[i][j];
        }

    }

    for (size_t i = 0; i < w; i++)
    {
        for (size_t j = 0; j < h; j++)
        {
            if (not (i || j) && mapa[i][j] == '#')
            {
                if (i && mapa[i - 1][j] == '.') coastline++;
                else if (i + 1 < w  && mapa[i + 1][j] == '.') coastline++;
                else if (j  && mapa[i][j - 1] == '.') coastline++;
                else if (j + 1 < h && mapa[i][j + 1] == '.') coastline++;
            }
            else if (mapa[i][j] == '#') coastline++;
        }

    }

    cout<<coastline<<endl;

    return 0;
}
