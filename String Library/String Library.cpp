#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
    clsString S1;

    S1.Value = "Abdo Saed";

    cout << S1.CountCapitalLetters();

    return 0;
}
