#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero, division;
    string hex = "";

    cin>>numero;

    for (; numero > 0;)
    {
        division = numero % 16;
        numero /= 16;

        if (division < 10) hex = to_string(division) + hex;
        else if (division == 10) hex = "A" + hex;
        else if (division == 11) hex = "B" + hex;
        else if (division == 12) hex = "C" + hex;
        else if (division == 13) hex = "D" + hex;
        else if (division == 14) hex = "E" + hex;
        else if (division == 15) hex = "F" + hex;
    }

    cout<<hex<<endl;
}
