#include <iostream>
#include <string>

using namespace std;

class Human {
public:
	Human() {
		name = "First Human";
		age = 0;
		favoriteFood = "None";
	}
	Human(string n, int a=0, string f="None") {
		name = n;
		age = a;
		favoriteFood = f;
	}

	void ShowId() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Favorite food: " << favoriteFood << endl;
	}

	void Birthday() {
		age++;
		cout << "Now " << name << " is " << age << " years old." << endl;
	}

private:
	string name;
	int age;
	string favoriteFood;
};

int main() {
	Human me("Luana", 18, "French fries");
	me.ShowId();
	cout << "\n";

	Human diana("Diana", 5, "Strogonoff");
	diana.ShowId();
	cout << "\n";

	Human vit("Vitoria", 17, "Risotto");
	vit.ShowId();
	cout << "\n";

	/*me.Birthday();
	cout << "\n";

	me.Birthday();
	cout << "\n";

	me.ShowId();
	cout << "\n";
	*/
	diana.Birthday();
	cout << "\n";

	diana.ShowId();
	cout << "\n";

	for (int i = 0; i < 5; i++) {
		me.Birthday();
	}



	return 0;
}