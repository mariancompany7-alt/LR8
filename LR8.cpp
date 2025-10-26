#include <iostream>
#include <vector>
#include <list>
#include <string>
#define SIZE 6
#define AMOUNT 10
#define OBJECTS 3
using namespace std;

//void fillUkrainianAlphabet(vector<string>& ukrAlphabet);
//void replaceLetter(vector<string>& ukrAlphabet);
//void fillList(list<string>& patronymic);
//void outputList(list<string>& patronymic);
//void sortList(list<string>& patronymic);

//void fillList(list<string>& patronymic) {
//	for (int j = 0; j < AMOUNT; j++) {
//		string letter;
//		cout << "Enter letter of patronymic: ";
//		cin >> letter;
//		patronymic.push_back(letter);
//	}
//}
//
//void outputList(list<string>& patronymic) {
//	for (string letter : patronymic) {
//		cout << letter << " ";
//	}
//	cout << endl; 
//}
//
//void sortList(list<string>& patronymic) {
//	list<string>::iterator it;
//	patronymic.sort();
//	cout << "List is sorting!...";
//	for (auto it = patronymic.begin(); it != patronymic.end(); ++it) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}

//void fillUkrainianAlphabet(vector<string>& ukrAlphabet) {
//	for (int i = 0; i < SIZE; i++) {
//		string letter;
//		cout << "Enter letter " << i + 1 << ": ";
//		cin >> letter;
//		ukrAlphabet.push_back(letter);
//	}
//}
//
//void replaceLetter(vector<string>& ukrAlphabet) {
//	for (int i = 0; i < SIZE; i++) {
//		if (ukrAlphabet[i] == "а" || ukrAlphabet[i] == "о" || ukrAlphabet[i] == "у"
//			|| ukrAlphabet[i] == "е" || ukrAlphabet[i] == "и" || ukrAlphabet[i] == "і") {
//			ukrAlphabet[i] = "ф";
//		}
//		cout << ukrAlphabet[i] << " ";
//	}
//	cout << endl;
//}

class Firm {
	string type;
	int size;
public:
	Firm();
	Firm(string type, int size);
	Firm(const Firm&);
	void setType(string type);
	string getType();
	void setSize(int size);
	int getSize();
	void print() const;
	void input();
	~Firm();
};

Firm::Firm() {
	type = "";
	size = 0;
}

void Firm::input() {
	cout << "Input type of firm: ";
	cin >> type;
	cout << "Input size of firm: ";
	cin >> size;
}

Firm::Firm(string type, int size) {
	this->size = size;
	this->type = type;
}

Firm::Firm(const Firm& obj1) {
	this->size = obj1.size;
	this->type = obj1.type;
}

void Firm::setType(string type) {
	this->type = type;
}

string Firm::getType() {
	return this->type;
}

void Firm::setSize(int size) {
	this->size = size;
}

int Firm::getSize() {
	return this->size;
}

Firm::~Firm() {

}

void Firm::print() const {
	cout << "Type:" << this->type << "\tSize:" << this->size << endl;
}

int main() {
	setlocale(LC_ALL, "ukr");

	/*vector<string> ukrAlphabet;
	fillUkrainianAlphabet(ukrAlphabet);
	replaceLetter(ukrAlphabet);*/

	/*list<string> patronymic;
	fillList(patronymic);
	outputList(patronymic);
	sortList(patronymic);*/

	vector<Firm> objects;
	cout << "Input vector elements...";
	for (int i = 0; i < OBJECTS; i++) {
		cout << "Input el " << i + 1 << ": " << endl;
		Firm tmp;
		tmp.input();
		objects.push_back(tmp);
		cout << endl;
	}

	for (int i = 0; i < OBJECTS; i++) {
		cout << i + 1 << ": ";
		objects[i].print();
	}

	return 0;
}
