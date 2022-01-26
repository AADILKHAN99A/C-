#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T != 0)
    {
        int a;
        cin >> a;

        int sum = 0;
        sum += (a % 10);
        int sum2;
        while (a > 0)
        {

            sum2 = a % 10;
            a /= 10;
        }
        sum += sum2;
        cout << sum << endl;
        T--;
    }
    return 0;
}