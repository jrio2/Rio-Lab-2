#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

//Joshua Rio

void DisplayInfo()
{
	/* function to display program specifications */
	cout << "\n\n";
	cout << "Edgebrook Electronics" << endl;
	cout << "_____________________\n\n" << endl;
	cout << "Standard Desktop, Laptop and Portable Palm Models:\n" << endl;
	cout << "Production Scheduling program:\n\n" << endl;
	cout << " The production constraints are:\n" << endl;
	cout << " 40d + 30l + 20p <= 2460 (Labor Constraints in hours" << endl;
	cout << " 550d + 225l + 175p <= 50000 (Capital Constraints in USD)\n";
		cout << "\n\n";
	cout << " where:" << endl;
	cout << " d equals the number of Standard Desktop Models" << endl;
	cout << " l equals the number of Laptop Models" << endl;
	cout << " p equals the number of Palmtop Models" << endl;
}
void FindProfit(int a, int b, int c)
{
	/* function to compute the profit */
	if ((40 * a + 30 * b + 20 * c <= 2460) && (550 * a + 225 * b + 175 * c <= 50000))
	{
		cout << "the production schedule is feasible" << endl;
		double profit = 1.30 * (550 * a + 225 * b + 175 * c);
		cout << "and the profit yielded by this schedule is $" << setiosflags(ios::fixed | ios::showpoint) << setprecision(2) << profit << endl;
	}
	else
	{
		cout << "\nthe production schedule is not feasible\n" << endl;
	}
}
int main()
{
	int d = 0, l = 0, p = 0;
	char answer = 'F';
		/* call the function to display the output heading */
		DisplayInfo();
	do
	{
		cout << "Please enter the number of Standard Desktop Models:"
			<< endl;
		cin >> d;

		cout << "Please enter the number of Laptop Models:"
			<< endl;
		cin >> l;

		cout << "Please enter the number of Palmtop Models:"
			<< endl;
		cin >> p;
		
			/* call the function to compute the feasible profit */
			FindProfit(d, l, p);
		cout << "\nEnter another production schedule?" << endl;
		cout << "type Y for Yes or N for No" << endl;
		cin >> answer;
		system("CLS");
	}
	while (answer == 'Y' || answer == 'y');
	return 0;
}