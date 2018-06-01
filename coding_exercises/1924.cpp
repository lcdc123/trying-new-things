#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    string curso;
    cin>>count;
    for (;count--;)
    {
        getline(cin,curso);
    }

    cout<<"Ciencia da Computacao\n";

    return 0;
}
