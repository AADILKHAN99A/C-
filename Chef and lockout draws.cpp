#include <iostream>
using namespace std;

void draw(int line)
{
    while (line != 0)
    {
        int a[3];
        int i=0;
        while(i<3)
        {
            cin>>a[i];
            i++;
        }

        if ((a[0] + a[1]) == a[2] || (a[1] + a[2]) == a[0] || (a[0] + a[2]) == a[1])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No"<<endl;
        }
        line--;
    }
}

int main()
{
    int line;
    cin >> line;
    draw(line);
    return 0;
}
