//Take a input from user with a positive integer. Write a function to compute the sum of series where n is input
//by the user in the main function. Find sum of series where i-th term is sum of first i natural numbers.
#include <iostream>

using namespace std;

int sum_of_series (int n)
{
  int sum;

  for (int i = 1; i <= n; ++i)
	{

	  sum += i * (i + 1) / 2;
	}
  return sum;
}

int
main ()
{
  int n;
  cout << "Enter the number of terms: ";
  cin >> n;

  int series_sum = sum_of_series (n);
  cout << "The sum of the series for n = " << n << " is: " << series_sum <<
	endl;

  return 0;
}
