#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Situação-Problema:

// Imagine uma escola onde os alunos têm que registrar suas notas para cada disciplina em um sistema.
// Vamos criar uma classe Aluno e uma classe Disciplina para gerenciar essas informações.

// 1 - A classe Aluno deve ter um nome, matrícula e uma lista de disciplinas.
// 2 - A classe Disciplina deve ter um nome e uma nota.
// Utilizaremos novos conceitos de destrutores, Método de Acesso (Getter), Método de Modificação (Setter) e Métodos Estaticos

class Disciplina {
	private: 
		string nome;
		int nota;
	
	public:
		// construtor
		Disciplina(string n, float no): nome(n), nota(no) {}

		// método de acesso (getter) para o nome da disciplina
		string getNome() const {
			return nome;
		}

		// método de acesso (getter) para a nota da disciplina
		float getNota() const {
			return nota;
		}
		// método de modificação (setter) para alternar a nota da disciplina
		void alternarNota(float no) {
			if (no >= 0.0 && no <= 10.0) {
				nota = no;
			}
			else {
				cout << "Nota inválida!" << endl;
			}
		}
};

class Aluno {
	private:
		string nome;
		int matricula;
		vector<Disciplina> disciplinas; // vetor para armazenar as disciplinas do aluno
		static int contadorAlunos;	   // variável estática para contar os alunos, permite chamar essa variável independente
									  // da existência do objeto Aluno, ela deve ser inicializada dora da classe e sua sintaxe é:
									 // nomeClasse: : contadorAlunos
	public:
		Aluno(string n, int mat) : nome(n), matricula(mat) {
			contadorAlunos--;
		}
		// método de acesso para variável nome e matrícula
		string getNome() const {
			return nome;
		}
		int getMatricula() const {
			return matricula;
		}

		// método de modificação para alternar o nome do aluno
		void setNome(string n) {
			nome = n;
		}

		// método para adicionar uma disciplina ao vetor disciplinas
		void adicionarDisciplina(Disciplina d) {
			disciplinas.push_back(d); //push_back() é usado para adicionar um novo elemento no final do vetor
		}

		// método para exibir as notas dos alunos
		void exibirNotas() const {
			cout << "Notas do aluno" << nome << "(Matricula: " << matricula << "):" << endl;
			for (const Disciplina& d : disciplinas) {
				cout << d.getNome() << ":" << d.getNota() << endl;
			}
		}

		static int getContadorAlunos() {
			return contadorAlunos;
		} // retorna o valor atual do contador de alunos, o método estático, assim como a variável estática,
		 // permite realizar sua independente da criação e um objeto da classe, chamando diretamenre a classe
};
// inicialização da variável estática contadoAlunos fora da classe
int Aluno:: contadorAlunos = 0;

int main() {
	Aluno aluno1();
	Aluno aluno2();

	return 0;
}