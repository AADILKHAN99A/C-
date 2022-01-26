#include <iostream>
using namespace std;

float withdraw(int amt, float bal)
{
    bal -= (amt + 0.50);
    return bal;
}

int main()
{
    int amount;
    float balance;
    cin >> amount;
    cin >> balance;

    if (amount % 5 != 0 || amount + 0.50 > balance)
    {
        cout << balance << endl;
    }
    else
    {
        cout << withdraw(amount, balance) << endl;
    }

    return 0;
}
