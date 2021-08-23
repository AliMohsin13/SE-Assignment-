/*
Name = Ali Mohsin
Course = Software Engineering
Github = Code Example , Finding largest of n numbers.

*/

# include <iostream>
using namespace std;
int main()
{
	int n, num, largest , count;
	cout << " How many numbers do you want to enter  : ";
	cin >> n;

	cout << " Enter the number : ";
	cin >> num;
	count = 1;

	largest = num;
	while (count < n)
	{
		cout << " Enter the  number again : ";
		cin >> num;
		count = count + 1;

		if (num > largest)
			largest = num;
	}

	cout << " The largest of " << n << " integers provided by the user  is   ";
	cout << largest << " . ";


	return 0;
}