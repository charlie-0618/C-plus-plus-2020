#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;               // create object for output
	outFile.open("test.txt");    // associate with a file

	cout << "Enter the make and model of automobile: ";
	//cin.getline(automobile, 50);
	cin.get(automobile, 50);
	cin.get();
	cout << "Enter the model year: ";
	while (!(cin >> year))
	{
		cin.clear();

		while (true)//cin.get() != '\n'
		{
			char m = cin.get();
			cout << m << endl;
			if (m == '\n')
				break;
			//continue;
		}
		cout << "請重新輸入整數: ";
	}
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.2 * a_price;

	// display information on screen with cout

	//cout << fixed;
	cout.precision(3);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

	// now do exact same things using outFile instead of cout

	//outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;

	outFile.close();                // done with file
									// cin.get();
									// cin.get();

	system("pause");

	return 0;
}