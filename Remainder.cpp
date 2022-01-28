#include <iostream>
using namespace std;

int remainder(int n, int p)
{
        int res;
        res = n % p;
        return res;
}

int main()
{
        int line;
        cin >> line;

        while (line != 0)
        {

                int num1, num2;
                cin >> num1>>num2;

                int rem = 0;

                cout << remainder(num1, num2) << endl;

                line--;
        }

        return 0;
}