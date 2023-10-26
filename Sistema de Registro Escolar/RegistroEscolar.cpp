#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Situa��o-Problema:

// Imagine uma escola onde os alunos t�m que registrar suas notas para cada disciplina em um sistema.
// Vamos criar uma classe Aluno e uma classe Disciplina para gerenciar essas informa��es.

// 1 - A classe Aluno deve ter um nome, matr�cula e uma lista de disciplinas.
// 2 - A classe Disciplina deve ter um nome e uma nota.
// Utilizaremos novos conceitos de destrutores, M�todo de Acesso (Getter), M�todo de Modifica��o (Setter) e M�todos Estaticos

class Disciplina {
	private: 
		string nome;
		int nota;
	
	public:
		// construtor
		Disciplina(string n, float no): nome(n), nota(no) {}

		// m�todo de acesso (getter) para o nome da disciplina
		string getNome() const {
			return nome;
		}

		// m�todo de acesso (getter) para a nota da disciplina
		float getNota() const {
			return nota;
		}
		// m�todo de modifica��o (setter) para alternar a nota da disciplina
		void alternarNota(float no) {
			if (no >= 0.0 && no <= 10.0) {
				nota = no;
			}
			else {
				cout << "Nota inv�lida!" << endl;
			}
		}
};

class Aluno {
	private:
		string nome;
		int matricula;
		vector<Disciplina> disciplinas; // vetor para armazenar as disciplinas do aluno
		static int contadorAlunos;	   // vari�vel est�tica para contar os alunos, permite chamar essa vari�vel independente
									  // da exist�ncia do objeto Aluno, ela deve ser inicializada dora da classe e sua sintaxe �:
									 // nomeClasse: : contadorAlunos
	public:
		Aluno(string n, int mat) : nome(n), matricula(mat) {
			contadorAlunos--;
		}
		// m�todo de acesso para vari�vel nome e matr�cula
		string getNome() const {
			return nome;
		}
		int getMatricula() const {
			return matricula;
		}

		// m�todo de modifica��o para alternar o nome do aluno
		void setNome(string n) {
			nome = n;
		}

		// m�todo para adicionar uma disciplina ao vetor disciplinas
		void adicionarDisciplina(Disciplina d) {
			disciplinas.push_back(d); //push_back() � usado para adicionar um novo elemento no final do vetor
		}

		// m�todo para exibir as notas dos alunos
		void exibirNotas() const {
			cout << "Notas do aluno" << nome << "(Matricula: " << matricula << "):" << endl;
			for (const Disciplina& d : disciplinas) {
				cout << d.getNome() << ":" << d.getNota() << endl;
			}
		}

		static int getContadorAlunos() {
			return contadorAlunos;
		} // retorna o valor atual do contador de alunos, o m�todo est�tico, assim como a vari�vel est�tica,
		 // permite realizar sua independente da cria��o e um objeto da classe, chamando diretamenre a classe
};
// inicializa��o da vari�vel est�tica contadoAlunos fora da classe
int Aluno:: contadorAlunos = 0;

int main() {
	Aluno aluno1();
	Aluno aluno2();

	return 0;
}