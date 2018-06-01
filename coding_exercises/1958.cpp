#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    long double entr;

    cin>>entr;

    cout.precision(4);
    cout<<scientific<<uppercase;

    cout<<showpos<<entr<<endl;
}
