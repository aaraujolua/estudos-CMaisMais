#include <iostream>
#include <string> // inclui o tipo de variavel string
using namespace std;
// FUNCAO
// tipo de retorno (ex: void); nome da func ( ex: teste);
// argumentos(ex: ()); escopo({});
void Teste() {
	cout << "batata" << endl;
	cout << "dinossauro" << endl;
	cout << "churrasco" << endl;
}

void Teste2(int x) {
	cout << x << " funciona" << endl;
}

int Soma(int primeiro_numero, int segundo_numero) {
	return primeiro_numero + segundo_numero;
}

struct Person {
	const Person() {
		name = "ninguem";
		age = 0;
		favorite_food = "nenhuma";
	}
	string name;
	int age;
	string favorite_food;
};

int main() {
	cout << "Hello world" << endl;

	Person Luana;
	cout << Luana.name << endl;
	cout << Luana.age << endl;
	cout << Luana.favorite_food << endl;



	// chamando a funcao
	Teste();

	int xy = 5; // exemplo de outra forma que poderia ser atribuido
	// o argumento

	Teste2(xy);
	Teste2(10);
	Teste2(75);

	int s = Soma(1, 1);

	cout << s << endl;

	// OPERADORES EXEMPLOS
	int numero = 0;
	numero = 50;
	int soma = numero += 10;
	int divisao = numero *= 10;
	cout << soma << endl;
	cout << divisao;

	// ALGUNS TIPOS DE VARIAVEIS
	float numero_quebrado = 0.0f;
	double numero_quebrado_preciso = 0.0;

	bool true_or_false = true;
	char uma_letra = 't';

	size_t tamanho = 0; // nao aceita valores negativos

	string caracteres = "abcdef12345";

	caracteres += "juncao";
	cout << caracteres << endl;

	// IF-ELSE EXEMPLO
	int x = 10;
	cout << "Digite um valor para X:" << endl;
	cin >> x;

	if (x > 0) {
		cout << "X eh positivo\n";
	}
	else if (x == 0) {
		cout << "X eh neutro\n";
	}
	else {
		cout << "X eh negativo\n";
	}

	// WHILE EXEMPLO
	while (true) {
		int y = 10;
		cout << "Digite um valor para Y:" << endl;
		cin >> y;

		if (y == 7777) {
			break;
		}

		if (y > 0) {
			cout << "Y eh positivo\n";
		}
		else if (y == 0) {
			cout << "Y eh neutro\n";
		}
		else {
			cout << "Y eh negativo\n";
		}
	}

	// FOR EXEMPLO
	for (int i = 0; i < 10; i++) {
		int z = 0;
		cout << "Digite um valor para Z:" << endl;
		cin >> z;

		if (z > 0) {
			cout << "Z eh positivo\n";
		}
		else if (z == 0) {
			cout << "Z eh neutro\n";
		}
		else {
			cout << "Z eh negativo\n";
		}
	}

	// ARRAYS
	int array[10];

	for (int i = 0; i < 10; i++) {
		array[i] = i;
		cout << array[i] << endl;
	}

	return 0;
}