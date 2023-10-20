#include <iostream>
#include <cstdlib> 

using namespace std;

int main()
{
    cout << "Enter two numbers: ";
    int x;
    int y;
    cin >> x >> y;

    int sum = x + y;
    int sub = x - y;
    int product = x * y;
    int distance = abs(sub);
    int avg = (x + y) / 2;

    cout << "The sum of " << x << " and " << y << " is " << sum << endl;
    cout << "The difference of " << x << " and " << y << " is " << sub << endl;
    cout << "The product of " << x << " and " << y << " is " << product << endl;
    cout << "The difference between " << x << " and " << y << " is " << distance << endl;
    cout << "The mean average of" << x << " and " << y << " is " << avg << endl;

    return 0;
}
