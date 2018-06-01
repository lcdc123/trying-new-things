#include <strings>
#include <iostream>

int main(int argc, char const *argv[])
{
    int size;
    string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    cin>>size;

    for (size_t i = 0; i < size; i++)
    {
        cout<<frase[i];
    }
    cout<<"\n";

    return 0;
}
