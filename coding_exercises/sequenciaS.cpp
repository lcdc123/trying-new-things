/**Bismillahir Rahmanir Rahim**/

#include <bits/stdc++.h>

int main() {

    int i;
    float s=0;

    for(i=1;i<=100; i++){
        s += 1.0/i;
    }

    printf("%.2f\n",s);

    return 0;
}

/*
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    double soma = 0;

    for (a = 1; a <= 100;a++)
    {
        soma += 1.0 / a;
    }
    cout<<fixed<<setprecision(3)<<soma<<endl;
}
*/
