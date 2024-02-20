#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile("data.txt");
	int N;
	string name;
	int score1, score2;

	if (!inFile) {
		cout << "Unable to open file" << endl;
		return 1;
	}

	inFile >> N;
	inFile.ignore();

	for (int i = 0; i < N; i++) {
		getline(inFile, name, ' ');
		inFile >>  score1 >> score2;
		inFile.ignore();
		int sum = score1 + score2;
		double avg = sum / 2.0;
		cout << "Student name: " << name << "     score1: " << score1 << "     score2: " << score2 << "     Sum: " << sum << "     Avg: " << avg << endl;

	}
	inFile.close();
	return 0;
}