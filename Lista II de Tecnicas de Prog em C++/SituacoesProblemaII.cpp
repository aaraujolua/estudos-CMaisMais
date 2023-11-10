#include <iostream>
#include <string>
#include <vector>

using namespace std;

// situacao 1
struct Person {
	string name;
	int age;
};

// situacao 2
struct Product {
	string name;
	float price;
};

// situacao 3
struct Student {
	string name;
	float note1;
	float note2;
};

// situacao 4
struct Employee {
	string name;
	float hourlySalary;
	float hoursWorked;
};

// situacao 5
struct Car {
	void ShowCarData() {
		cout << brand << endl;
		cout << model << endl;
		cout << year << endl;
		cout << value << endl;
	}
	string brand;
	string model;
	int year;
	float value;
};

// situacao 6
struct Contacts {
	string name;
	long long int phone;
	string email;
};
void AddContact(vector<Contacts>& contacts) {
	Contacts contact;

	cout << "Enter contact name: ";
	cin >> contact.name;
	cout << "Enter contact phone: ";
	cin >> contact.phone;
	cout << "Enter contact email: ";
	cin >> contact.email;
	cout << endl << "Contact saved successfully" << endl << endl;

	contacts.push_back(contact);
}

void ViewContacts(vector<Contacts>& contacts) {
	cout << "Contacts List:" << endl << endl;
	for (const Contacts& contact : contacts) {
		cout << "Name: " << contact.name << endl;
		cout << "Phone: " << contact.phone << endl;
		cout << "Email: " << contact.email << endl << endl;
	}
}

void SearchContact(vector<Contacts>& contacts) {
	string searchName;
	bool contactFound = false;

	cout << "Enter the contact name that you want to find: ";
	cin >> searchName;
	cout << endl;

	for (const Contacts& contact : contacts) {
		if (searchName == contact.name) {
			cout << "Name: " << contact.name << endl;
			cout << "Phone: " << contact.phone << endl;
			cout << "Email: " << contact.email << endl << endl;
			contactFound = true;
		}
	}
	if (!contactFound) {
		cout << "Sorry, this contact doesn't exist in the system." << endl << endl;
	}
}


int main() {
	/*Situação Problema 1
	Criar um algoritmo que leia o nome e a idade de uma pessoa e imprima esses dados.
	Requisitos:
	• Usar uma struct para armazenar nome e idade.
	• Utilizar comando de entrada para ler os dados.
	• Utilizar comando de saída para mostrar os dados.*/
	Person you;

	cout << "Enter your name: ";
	cin >> you.name;

	cout << "Enter your age: ";
	cin >> you.age;

	cout << "Your name is " << you.name << " and you are " << you.age << " years old.";


	/*Situação Problema 2
	Criar um algoritmo que leia os dados de um produto (nome e preço) e aplique um desconto de
	10% no preço, imprimindo o novo valor.
	Requisitos:
	• Usar uma struct para armazenar nome e preço do produto.
	• Utilizar comando de entrada para ler os dados.
	• Aplicar o desconto no preço.
	• Utilizar comando de saída para mostrar o novo preço*/

	Product car;

	cout << "Enter the product name: ";
	cin >> car.name;
	cout << "Enter the price of the product: ";
	cin >> car.price;

	cout << "Your discount has been applied. The new price is: " << car.price - car.price * 10 / 100;

	/*Situação Problema 3
	Criar um algoritmo que leia os dados de 5 alunos (nome, nota1, nota2) e imprima o nome e a
	média de cada um.
	Requisitos:
	• Usar uma struct para armazenar os dados do aluno.
	• Usar um vetor de structs para os alunos.
	• Utilizar estrutura de repetição para leitura e cálculo da média.
	• Utilizar comando de saída para mostrar os resultados.
	*/

	vector<Student> students;

	for (int i = 0; i < 5; i++) {
		Student student;

		cout << "Enter the student" << i + 1 << "'s name: ";
		cin >> student.name;
		cout << "Enter the student" << i + 1 << "'s first note: ";
		cin >> student.note1;
		cout << "Enter the student" << i + 1 << "'s second note: ";
		cin >> student.note2;

		students.push_back(student);
	}

	for (const Student& student : students) {
		float average = (student.note1 + student.note2) / 2;

		cout << student.name << " average = " << average << endl;
	}

	/*Situação Problema 4
	Criar um algoritmo que leia os dados de 3 funcionários (nome, horas trabalhadas,
	valor por hora) e calcule o salário de cada um, considerando que horas extras
	(acima de 40 horas) são pagas com 50% a mais.
	Requisitos:
	• Usar uma struct para armazenar os dados do funcionário.
	• Usar um vetor de structs para os funcionários.
	• Calcular o salário, considerando horas extras se aplicável.
	• Utilizar comando de saída para mostrar os salários.*/

	vector<Employee> employees;

	for (int i = 0; i < 3; i++) {
		Employee employee;

		cout << "Enter the employee" << i + 1 << "'s name: ";
		cin >> employee.name;
		cout << "Enter the employee" << i + 1 << "'s hours worked: ";
		cin >> employee.hoursWorked;
		cout << "Enter the employee" << i + 1 << "'s hourly salary: ";
		cin >> employee.hourlySalary;

		employees.push_back(employee);
	}

	for (const Employee& employee : employees) {
		float salary;

		if (employee.hoursWorked > 40) {
			salary = 40 * employee.hourlySalary +
				(employee.hoursWorked - 40) * (employee.hourlySalary * 1.5);
		}
		else {
			salary = employee.hourlySalary * employee.hoursWorked;
		}
		cout << employee.name << "'s salary is: " << salary << endl;
	}

	/*Situação Problema 5
	Criar um algoritmo que leia os dados de 10 carros (marca, modelo, ano, preço) e encontre o carro
	mais antigo e o mais caro.
	Requisitos:
	• Usar uma struct para armazenar os dados do carro.
	• Usar um vetor de structs para os carros.
	• Usar estrutura de repetição para determinar o carro mais antigo e o mais caro.
	• Utilizar comando de saída para mostrar os resultados.
	*/
	vector<Car> cars;


	for (int i = 0; i < 4; i++) {
		Car car;

		cout << "Enter the car" << i + 1 << "'s brand: ";
		cin >> car.brand;
		cout << "Enter the car" << i + 1 << "'s model: ";
		cin >> car.model;
		cout << "Enter the car" << i + 1 << "'s year: ";
		cin >> car.year;
		cout << "Enter the car" << i + 1 << "'s value: ";
		cin >> car.value;
		cout << endl;

		cars.push_back(car);
	}

	Car oldestCar = cars[0];
	Car mostExpensiveCar = cars[0];

	for (Car& car : cars) {

		if (oldestCar.year > car.year) {
			oldestCar = car;
		}

		if (mostExpensiveCar.value < car.value) {
			mostExpensiveCar = car;

		}

	}

	cout << "The oldest car is:" << endl;
	oldestCar.ShowCarData();
	cout << endl;

	cout << "The most expensive car is:" << endl;
	mostExpensiveCar.ShowCarData();

	/*Situação Problema 6
	Criar um algoritmo que gerencie uma agenda de contatos. Cada contato possui nome, telefone e
	e-mail. O programa deve permitir adicionar contatos, listar todos os contatos, e buscar um
	contato pelo nome.
	Requisitos:
	• Usar uma struct para armazenar os dados do contato.
	• Implementar funções para adicionar, listar e buscar contatos.
	• Utilizar estruturas de repetição e decisão para implementar as funcionalidades.
	• Utilizar comando de entrada para receber ações do usuário e comando de saída para
	mostrar os resultados.*/
    vector <Contacts> contacts;
    int option = 0;

    while (true) {
        cout << "CONTACTS LIST" << endl << endl;
        cout << "1) Add contact." << endl << "2) View contacts." << endl << "3) Search contact." << endl;
        cout << "Choose an option: ";
        cin >> option;
        cout << "\n";
    
        switch (option) {
        case 1:
            AddContact(contacts);
            break;

        case 2:
            if (contacts.empty()) {
                cout << "The contacts list is empty." << endl << endl;
            }
            else {
                ViewContacts(contacts);
                break;
            }
        case 3:
            SearchContact(contacts);
            break;
        }

    }

    return 0;
}
