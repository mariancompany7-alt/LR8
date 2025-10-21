#include <windows.h>
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
		if (ukrAlphabet[i] == "à" || ukrAlphabet[i] == "î" || ukrAlphabet[i] == "ó"
			|| ukrAlphabet[i] == "å" || ukrAlphabet[i] == "è" || ukrAlphabet[i] == "³") {
			ukrAlphabet[i] = "ô";
		}
		cout << ukrAlphabet[i] << " ";
	}
	cout << endl;
}

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "ukr");
	vector<string> ukrAlphabet;
	fillUkrainianAlphabet(ukrAlphabet);
	replaceLetter(ukrAlphabet);

	return 0;
}