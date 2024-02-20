#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream outFile("data.txt");
   int N;
   string name;
   int score1, score2;

   cout << "Enter the number of students: ";
   cin >> N;
   outFile << N << endl;

   for (int i = 0; i < N; i++) {
    cout << "Enter student's name and two scores: ";
    cin >> ws;
    getline(cin, name);
    cin >> score1 >> score2;
    outFile << name << " " << score1 << " " << score2 << endl;

   }
   outFile.close();
   return 0;
}