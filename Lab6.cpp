#include <iostream>

using namespace std;


float celsius(float parFahrenheit);

int main()
{
	float fahrenheit = 0;
	bool isPlaying = true;

	while (isPlaying)
	{
		cout << "Type Fahrenheit that you want to change to Celsius.\n";
		cout << "Fahrenheit temperatures must be -20 through 100\n\n";
		cout << "(If you want to terminate this program, Type 999)\n\n";
		cout << " > ";
		cin >> fahrenheit;


		// terminating
		if (fahrenheit == 999)
		{
			isPlaying = false;
		}
		else if (fahrenheit < -20 || fahrenheit > 100)
		{
			cout << "\nPlease Type -20 through 100\n";
			cout << "\nplease enter to continue\n";
			getchar();
			getchar();
			system("cls");
		}
		else
		{
			cout << "Celsius is " << celsius(fahrenheit) << endl;
			cout << "\nplease enter to continue\n";
			getchar();
			getchar();
			system("cls");
		}
	}
	return 0;
}


float celsius(float parFahrenheit)
{
	float tmpCelcius = (5.0 / 9.0) * (parFahrenheit - 32);
	return tmpCelcius;
}