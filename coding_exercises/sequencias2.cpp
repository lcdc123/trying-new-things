#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n = 1;
    float soma;

    for(int i = 1;i <= 39; i+=2, n*=2)
    {
        soma += (i / (float)n);
        cout<<i<<"/"<<n<<endl;
    }
    cout<<soma<<endl;
}
