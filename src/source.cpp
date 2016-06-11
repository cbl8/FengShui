#include "source.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printBaguaMap() {
	cout << "        BAGUA MAP       " << endl;
	cout << " _______________________" << endl;
	cout << "|       |       |       |" << endl;
	cout << "|   1   |   2   |   3   |" << endl;
	cout << "|_______|_______|_______|" << endl;
	cout << "|       |       |       |" << endl;
	cout << "|   4   |   5   |   6   |" << endl;
	cout << "|_______|_______|_______|" << endl;
	cout << "|       |       |       |" << endl;
	cout << "|   7   |   8   |   9   |" << endl;
	cout << "|_______|_______|_______|" << endl;
	cout << endl;
}

vector<string> initQuestions() {
	vector<string> answers;
	string x;
	int max;

	cout << "Please remain seated facing one direction for this introduction." << endl;
	cout << "Mentally place the above map over the floor plan of your room." << endl;
	cout << "Using the above image, please answer the following questions:" << endl << endl;
	cout << "1. Which square are you sitting in?: ";
	cin >> x;
	answers.push_back(x);

	cout << "2a. Which square contains your entry door?: ";
	cin >> x;
	answers.push_back(x);

	cout << "2b. In square " << answers[answers.size() - 1] << ", which wall contains your door? (top/bottom/left/right): ";
	cin >> x;
	answers.push_back(x);

	cout << "3a. How many windows do you have?: ";
	cin >> x;
	answers.push_back(x);
	max = atoi(x.c_str());

	for (int i = 1; i <= max; i++){
		char let = 97 + i;
		cout << "3" << let << "i. Which square contains window #" << i << "?: ";
		cin >> x;
		answers.push_back(x);

		cout << "3" << let << "ii. In square " << answers[answers.size() - 1] << ", which wall contains window #" << i << "? (top/bottom/left/right): ";
		cin >> x;
		answers.push_back(x);
	}

	return answers;
}

int main() {
	printBaguaMap();
	vector<string> answers = initQuestions();
	int c;
	cin >> c;
	return c;
}