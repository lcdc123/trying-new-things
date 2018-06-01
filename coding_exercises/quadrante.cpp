#include <iostream>

using namespace std;

int main()
{
    int abss, orde;
    while (cin>>abss && cin>>orde && abss != 0 && orde != 0)
    {

        if (abss > 0 && orde > 0)
        {
            cout<<"primeiro"<<endl;
        } else if (abss < 0 && orde > 0)
        {
        cout<<"segundo"<< endl;
        } else if (abss < 0 && orde < 0)
        {
            cout<<"terceiro"<<endl;
        } else if (abss > 0 && orde < 0)
        {
            cout<<"quarto"<<endl;
        }
    }
    return 0;
}
