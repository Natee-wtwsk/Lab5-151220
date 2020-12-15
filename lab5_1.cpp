#include<iostream>
using namespace std;

int main()
{
    int number[] = {};
    int i = 0;

    cout << "Enter an integer: ";
    cin >> number[i];
    i++;

    while(number[i]!=0)
    {
        cout << "Enter an integer: ";
        cin >> number[i];
        cout << i;

        i++;
    }

    cout << "#Even numbers = ";
    cout << "#Odd numbers = ";

    return 0;
}
