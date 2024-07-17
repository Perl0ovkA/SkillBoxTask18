#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

class Player
{
public:
	Player()
	{
		name = "default";
		score = 0;
	}
	Player(string N, int S)
	{
		name = N;
		score = S;
	}

	int score;
	string name;

	void Show()
	{
		cout << "Player name: " << name << "Player score: " << score << endl;
	}
};

int main()
{
	int size;
	cout << "Enter the number of players: ";
	cin >> size;
	Player* pl = new Player[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Player: ";
		cin >> pl[i].name;
		cout << "Enter Score: ";
		cin >> pl[i].score;
		sort(pl[i].score, pl[i].score + size);
		pl[i].Show();
	}
}