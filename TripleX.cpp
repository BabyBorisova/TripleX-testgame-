//Simple game in c++ developed in VSCode
//BabyBorisova, 2021
#include <iostream>
#include <ctime>
using namespace std;


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

void PrintLevelStats(int difficulty, int sum, int prod)
{
	cout << "You approach a door with caster level " << difficulty << " runes...";
	cout << "\n* The seal has three runes";
	cout << "\n* The sum of the runes is " << sum;
	cout << "\n* The product of the runes is " << prod << endl;
}

bool PlayGame(int difficulty)
{

	unsigned int a, b, c, sum, prod;
	unsigned int guessA, guessB, guessC, guessSum, guessProd;

	//random code generation
	a = rand()%difficulty + difficulty;
	b = rand()%difficulty + difficulty;
	c = rand()%difficulty + difficulty;
	sum = a + b + c;
	prod = a * b * c;

  //print the level  info
	PrintLevelStats(difficulty, sum, prod);

	// takes player guess input
	cin >> guessA >> guessB >> guessC;
	guessSum = guessA + guessB + guessC;
	guessProd = guessA * guessB * guessC;
	
	// checks players guess
	if ((guessSum == sum && guessProd == prod))
	{
		cout << "\nYou broke the seal and walk through the door way\n";
		return true;
	}
	else
	{
		cout << "\nThe light of the seal intensifies\n";
		cout << "The seal explodes and knocks you unconcious\n";
		return false;
	}
}

int main()
{
	srand(time(NULL));

	const unsigned int maxDifficulty = 7;
	unsigned int levelDifficulty = 1;

	PrintIntro();

	// game loop
	while (levelDifficulty <= maxDifficulty)
	{
		bool levelComplete = PlayGame(levelDifficulty);
		cin.clear();
		cin.ignore();

		if (levelComplete) 
		{
			++levelDifficulty;
		}
		else
		{
			return 0; //exit program
		}
	}

	//print win statement
	cout << "\nGolden light shines beyond the final door\nYou hvae made it to the tresure room\n";

	
  return 0;
}