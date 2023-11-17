#include <iostream>

using namespace std;

int main() {
    int min, max ,count; //initialises inoput variables and counting variable
    int sum = 0; // initialise sum variable between minimium and maximum numbers

    //takes input from the user
    cout << "Enter the minimum number :";
    cin >> min;

    cout << "Enter the maximum number :";
    cin >> max;
    
    //starts count at mininimum number
    count = min;

    //executes the summation
    while (count <= max) {
        sum += count;
        count++;
    }

    //ouput results of sum
    cout << "Sum from " << min << " and " << max << " is " << sum << endl;

    return 0;
}