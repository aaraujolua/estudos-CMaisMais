#include <iostream>
#include <string>

using namespace std;

class Book {
private:
	string title, author;
	int isbn;

public:
	Book(string t, string a, int i) : title(t), author(a), isbn(i) {};

	void showInfo() {
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "ISBN : " << isbn << endl;
	}
};

int main() {
	string title, author;
	int isbn;

	cout << "Insert the Title: ";
	getline (cin, title);

	cout << "Insert the Author: ";
	getline(cin, author);

	cout << "Insert the ISBN: ";
	cin >> isbn;

	Book myBook(title, author, isbn);
	myBook.showInfo();

	return 0;
};