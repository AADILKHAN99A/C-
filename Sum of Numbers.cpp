#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    while (n != 0)
    {
        int i;
        cin >> i;
        int sum = 0;
        while (i > 0)
        {
            sum = sum + (i % 10);
            i = i / 10;
        }
        cout << sum << endl;
        n--;
    }
    return 0;
}