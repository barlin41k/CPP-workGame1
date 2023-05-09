#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
	int bucks = 0;
	int buckses = 0;
	int works;
	ifstream bucks1;
	bucks1.open("variables.txt");
	bucks1 >> bucks;

	cout << "Hello! Choose the job you will work in.\n";
	cout << "1. Factory\n"; cout << "2. Mine\n";
	cin >> works;
	do
	{
		cout << "Please enter correctly!\n";
		cout << "1. Factory\n"; cout << "2. Mine\n";
		cin >> works;
	} while (works > 2);
	if (works == 1)
	{
		cout << "Job selected: Factory\n";

		string goWorking;
		cout << "To work, write work\n"; cin >> goWorking;
		do
		{
			srand(time(NULL));
			buckses = rand();
			bucks = bucks + buckses;
			ofstream money;
			money.open("variables.txt");
			money << bucks;
			money.close();
			cout << "You worked in a factory and got " << buckses << " money.\n";
			cout << "Your balance - " << bucks << " money" << endl;
			cout << "To work, write work\n"; cin >> goWorking;
		} while (goWorking == "work");
		string answer;
		cout << "Exit console? You won't be able to save your progress! (y/n)\n"; cin >> answer;
		if (answer == "y")
		{
			return 1;
		}
		else if (answer == "n")
		{
			goWorking = "work";
		}
		do
		{
			srand(time(NULL));
			buckses = rand();
			bucks = bucks + buckses;
			ofstream money;
			money.open("variables.txt");
			money << bucks;
			money.close();
			cout << "You worked in a factory and got " << buckses << " money.\n";
			cout << "Your balance - " << bucks << " money" << endl;
			cout << "To work, write work\n"; cin >> goWorking;
		} while (goWorking == "work");
	}
	else if (works == 2)
	{
		cout << "The job was chosen: Miner\n";

		string goWorking1;
		cout << "To work, write work\n"; cin >> goWorking1;
		do
		{
			srand(time(NULL));
			buckses = rand();
			bucks = bucks + buckses;
			ofstream money;
			money.open("variables.txt");
			money << bucks;
			money.close();
			cout << "You worked in a mine and got " << buckses << " money.\n";
			cout << "Your balance - " << bucks << " money" << endl;
			cout << "To work, write work\n"; cin >> goWorking1;
		} while (goWorking1 == "work");
		string answer1;
		cout << "Exit console? You won't be able to save your progress! (y/n)\n"; cin >> answer1;
		if (answer1 == "y")
		{
			return 1;
		}
		else if (answer1 == "n")
		{
				goWorking1 = "work";
		}
		do
		{
			srand(time(NULL));
			buckses = rand();
			bucks = bucks + buckses;
			ofstream money;
			money.open("variables.txt");
			money << bucks;
			money.close();
			cout << "You worked in a mine and got " << buckses << " money.\n";
			cout << "Your balance - " << bucks << " money" << endl;
			cout << "To work, write work\n"; cin >> goWorking1;
		} while (goWorking1 == "work");
	};
}