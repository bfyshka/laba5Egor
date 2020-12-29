/*
№4 vt 1
*/
#include <iostream>

using namespace std;

int funcF(int n)
{
    int temp;

    if (n % 10 > 0) temp = n % 10;      
    else if (n == 0) temp = 0;     
    else temp = funcF(n / 10);
        
    return temp;
}

int main()
{
    while (true)
    {
        cout << "Enter p and q:" << endl;
        int p, q;
        cin >> p >> q;

        if (p < 0 && q < 0)
            return 0;

        int funcS = 0;
        for (p; p <= q; p++)
            funcS += funcF(p);

        cout << "S(p,q) = " << funcS << endl;
    }
}

