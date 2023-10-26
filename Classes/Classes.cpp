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

private:
	string name;
	int age;
	string favoriteFood;
};

int main() {
	Human me("Luana", 18, "French fries");
	me.ShowId();

	Human diana("Diana", 5, "Strogonoff");
	diana.ShowId();

	Human vit("Vitoria", 17, "Risotto");
	vit.ShowId();

	return 0;
}