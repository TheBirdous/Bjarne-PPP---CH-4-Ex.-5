#include "../../std_lib_facilities.h"

int main()
{
	double value1 = 0;
	double value2 = 0;
	char oper = ' ';
	double result = 0;

	while (cin >> value1 >> oper >> value2)
		if (oper == '+')
		{
			result = value1 + value2;
			cout << "The sum of " << value1 << " and " << value2 << " is " << result << ".\n";
		}
		else if (oper == '-')
		{
			result = value1 - value2;
			cout << "The difference of " << value1 << " and " << value2 << " is " << result << ".\n";
		}
		else if (oper == '*')
		{
			result = value1 * value2;
			cout << "The product of multiplication of " << value1 << " and " << value2 << " is " << result << ".\n";
		}
		else if (oper == '/')
		{
			result = value1 / value2;
			cout << "The product of division of " << value1 << " and " << value2 << " is " << result << ".\n";
		}
		else
		{
			cout << "Wrong operator has been entered, please try again." << '\n';
		}
}