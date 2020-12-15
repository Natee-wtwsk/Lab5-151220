#include<iostream>
using namespace std;

int main()
{
	int number;
	int Even_number = 0;
	int Odd_number = 0;
	
	cout << "Enter an integer: ";
	cin >> number;
	if(number!=0)
	{
		if(number%2==0)
		{
			Even_number++;	
		}
		else
		{
			Odd_number++;
		}
	}
	
	while(number!=0)
	{
		cout << "Enter an integer: ";
		cin >> number;
		if(number!=0)
		{
			if(number%2==0)
			{
				Even_number++;	
			}
			else
			{
				Odd_number++;
			}
		}
	}
    cout << "#Even numbers = " << Even_number << endl;
    cout << "#Odd numbers = " << Odd_number;
    return 0;
}