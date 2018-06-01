#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, mes;

    cin>>mes;
    mes--;

    switch (mes)
    {
        case 0:
            cout<<dias[0]<<endl;
            break;
        case 1:
            cout<<dias[1]<<endl;
            break;
        case 2:
            cout<<dias[2]<<endl;
            break;
        case 3:
            cout<<dias[3]<<endl;
            break;
        case 4:
            cout<<dias[4]<<endl;
            break;
        case 5:
            cout<<dias[5]<<endl;
            break;
        case 6:
            cout<<dias[6]<<endl;
            break;
        case 7:
            cout<<dias[7]<<endl;
            break;
        case 8:
            cout<<dias[8]<<endl;
            break;
        case 9:
            cout<<dias[9]<<endl;
            break;
        case 10:
            cout<<dias[10]<<endl;
            break;
        case 11:
            cout<<dias[11]<<endl;
            break;
    }

    return 0;
}
