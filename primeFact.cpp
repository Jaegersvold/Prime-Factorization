// Joe Rensvold
// Section 2
// Project 2
// Due September 10th

/*
    This program will prompt the user for a positive integer.
    The program will then display an error message if the user
    has input a negative integer, a specific message regarding
    the integer 1, or the prime factorization of the user's entered integer.
*/

/*
    Pre-Condition: A positive integer
    Post-Condition: A prime factorization of the entered integer
*/

#include <iostream>
using namespace std;

void primeFactor(int userNum)
{
    if(userNum > 1)
	{
	    int count = 2;

		while (userNum % count != 0)
			count++;

        cout << " " << count << " ";         // Comment this out

        if (userNum/count != 1)
            primeFactor(userNum/count);

        //cout << " " << count << " ";      // And add this to display in DESCENDING order

	}

}

int main()
{
    int num;

	cout << "Please enter a positive integer: " << endl;
	cin >> num;

	if (num <= 0)
        cout << "That is an invalid entry." << endl;

    else if(num == 1)
        cout << "1 has no prime factors." << endl;

    else
    {
        cout << "The prime factors of " << num << " are: ";
        primeFactor(num);
    }

	return 0;
}
