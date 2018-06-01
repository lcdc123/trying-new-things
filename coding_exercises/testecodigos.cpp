#include <iostream>

using namespace std;

int main()
{
    unsigned int a = 0;

    for (size_t i = 0; i < 2; i++) {
        cout<<"Iteracao "<<i+1<<endl;
        if (a++) cout<<"a nao eh 0 nessa iteracao\n";
        else cout<<"a eh 0 nessa iteracao\n";
    }

}
