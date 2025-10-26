#include <iostream>
#include <vector>
#include <string>
#define SIZE 6
using namespace std;

void fillUkrainianAlphabet(vector<string>& ukrAlphabet);
void replaceLetter(vector<string>& ukrAlphabet);

void fillUkrainianAlphabet(vector<string>& ukrAlphabet) {
	for (int i = 0; i < SIZE; i++) {
		string letter;
		cout << "Enter letter " << i + 1 << ": ";
		cin >> letter;
		ukrAlphabet.push_back(letter);
	}
}

void replaceLetter(vector<string>& ukrAlphabet) {
	for (int i = 0; i < SIZE; i++) {
		if (ukrAlphabet[i] == "а" || ukrAlphabet[i] == "о" || ukrAlphabet[i] == "у"
			|| ukrAlphabet[i] == "е" || ukrAlphabet[i] == "и" || ukrAlphabet[i] == "і") {
			ukrAlphabet[i] = "ф";
		}
		cout << ukrAlphabet[i] << " ";
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "ukr");
	vector<string> ukrAlphabet;
	fillUkrainianAlphabet(ukrAlphabet);
	replaceLetter(ukrAlphabet);

	return 0;
}
