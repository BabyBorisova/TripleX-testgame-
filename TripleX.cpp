//Simple game in c++ developed in VSCode
//BabyBorisova, 2021
#include <iostream>
using namespace std;

//initializes variables
const unsigned int maxDiff = 12;
unsigned int diff = 2;
unsigned int a, b, c, sum, prod;
unsigned int guessA, guessB, guessC, guessSum, guessProd;

void PrintIntro()
{
	//entry text
	cout << endl;
  cout << "You are an explorer searching ancient ruins of Ka'bal\n";
  cout << "Magically sealed doors block your path\n";
  cout << "Enter the correct runes to get to the treasure room\n\n";

	//ascii logo
	cout << "   _____\n";
  cout << "  /     \\\n";
  cout << "  | / \\ |\n";
  cout << "  | \\ / |\n";
  cout << "  |o    |\n";
  cout << "  |_____|\n";
}

bool PlayGame()
{
	//random code generation
	a = rand()%diff + diff;
	b = rand()%diff + diff;
	c = rand()%diff + diff;
	sum = a + b + c;
	prod = a * b * c;

	//game info
	cout << "You approach the door...";
	cout << "\n* The seal has three runes";
	cout << "\n* The sum of the runes is " << sum;
	cout << "\n* The product of the runes is " << prod << endl;

	// takes player guess input
	cin >> guessA >> guessB >> guessC;
	guessSum = guessA + guessB + guessC;
	guessProd = guessA * guessB * guessC;
	
	// checks players guess
	if ((guessSum == sum && guessProd == prod))
	{
		cout << "\nYou broke the seal\n\n";
		return true;
	}
	else
	{
		cout << "\nThe light of the seal intensifies";
		cout << "\nThe seal explodes and knocks you unconcious\n\n";
		return false;
	}
}

int main()
{
	

	PrintIntro();

	while (true)
	{
		PlayGame();
		cin.clear();
		cin.ignore();
	}

	
  return 0;
}