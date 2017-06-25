#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	cout << "FutuGen - Season and Episode Futurama" << endl;
	srand(time(0));
	int season = 1 + rand() % 7;
	switch (season)
	{
	case 1:
	{
		int ep = 1 + rand() % 13;
		cout << "Season: " << season << endl;
		cout << "Episode: " << ep << endl;
		break;}
	case 2:
	{
		int ep = 1 + rand() % 19;
		cout << "Season: " << season << endl;
		cout << "Episode: " << ep << endl;
		break;}
	case 3:
	{
		int ep = 1 + rand() % 22;
		cout << "Season: " << season << endl;
		cout << "Episode: " << ep << endl;
		break;}
	case 4:
	{
		int ep = 1 + rand() % 18;
		cout << "Season: " << season << endl;
		cout << "Episode: " << ep << endl;
		break;}
	case 5:
	{
		int ep = 1 + rand() % 4;
		cout << "Season: " << season << endl;
		cout << "Episode: " << ep << endl;
		break;}
	case 6:
	{
		int ep = 1 + rand() % 26;
		cout << "Season: " << season << endl;
		cout << "Episode: " << ep << endl;
		break;}
	case 7:
	{
		int ep = 1 + rand() % 26;
		cout << "Season: " << season << endl;
		cout << "Episode: " << ep << endl;
		break;}
	default:
		cout << "Wrong number!" << endl;
		break;
		return 0;
	}
}