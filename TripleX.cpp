//Simple game in c++ developed in VSCode
//BabyBorisova, 2021
#include <iostream>
using namespace std;

int main()
{
	//initializes variables
	const unsigned int maxDiff = 10;
	unsigned int diff = 1;
	unsigned int a, b, c;
	unsigned int sum;
	unsigned int prod;
	unsigned int guessA, guessB, guessC;

	//entry text
	cout << endl;
  cout << "You are an explorer searching ancient ruins of Ka'bal" << endl;
  cout << "Magically sealed doors block your path" << endl;
  cout << "Enter the correct runes to get to the treasure room" << endl;
  cout << endl;
	//ascii logo
	cout << "   _____    " << endl;
  cout << "  /     \\  " << endl;
  cout << "  | / \\ |  " << endl;
  cout << "  | \\ / |  " << endl;
  cout << "  |o    |   " << endl;
  cout << "  |_____|   " << endl;

	//game loop
	while (diff < maxDiff)
	{
		//random code generation
		a = rand()%diff + diff;
		b = rand()%diff + diff;
		c = rand()%diff + diff;
		sum = a + b + c;
		prod = a * b * c;
		//game info
		cout << "You approach the door..." << endl;
		cout << "* The seal has three runes" << endl;
		cout << "* The sum of the runes is " << sum << endl;
		cout << "* The product of the runes is " << prod << endl;

		cin >> guessA;
		cin >> guessB;
		cin >> guessC;
		cout << "You entered " << guessA << guessB << guessC << endl;
	}
  return 0;
}