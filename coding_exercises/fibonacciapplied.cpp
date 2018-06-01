#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

long long fatorial(long long n)
{

    if (!(n - 1))
    {
        return 1;
    }
    else
    {
        return n * fatorial(n-1);
    }

}

int main(int argc, char const *argv[])
{
    inicio:
    long long fatorar;
    cin>>fatorar;
    cout<<fatorial(fatorar)<<endl;
    goto inicio;
    return 0;
}
