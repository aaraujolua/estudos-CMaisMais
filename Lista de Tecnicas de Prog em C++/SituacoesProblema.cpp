#include <iostream>
#include <vector>

using namespace std;

/*Situa��o Problema 6
Criar um algoritmo que leia uma matriz 3x3 de n�meros inteiros e determine a soma da diagonal
principal. Se essa soma for �mpar, o algoritmo deve imprimir a matriz transposta, caso contr�rio,
deve imprimir a matriz original.
Requisitos:
� Usar matriz para armazenar os n�meros.
� Usar estruturas de repeti��o aninhadas para a leitura dos elementos e c�lculo da soma da diagonal.
� Usar estruturas de decis�o para verificar se a soma � �mpar ou par.
� Implementar uma fun��o para calcular a matriz transposta.
� Utilizar comando de sa�da para mostrar a matriz resultante.*/

void CalculateMatrixT(int matrix[3][3]) {
    int matrixT[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrixT[i][j] = matrix[j][i];
        }
    }

    cout << "Trasnposed Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrixT[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[3][3];
    int sumDiagonal = 0;

    cout << "Enter the 3x3 Matrix numbers: " << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
            if (i == j) {
                sumDiagonal += matrix[i][j]; // Calcula a soma da diagonal principal
            }
        }
    }

    cout << "Main diagonal sum : " << sumDiagonal << endl;

    // Verifica se a soma da diagonal principal � �mpar
    if (sumDiagonal % 2 != 0) {
        // Se for �mpar, calcular e imprimir a matriz transposta
        CalculateMatrixT(matrix);
    }
    else {
        cout << "Original Matrix:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }



    /*Situa��o Problema 1
    Criar um algoritmo que l� um n�mero inteiro e imprime o dobro desse n�mero.
    Requisitos:
    � Utilizar comando de entrada.
    � Utilizar operadores aritm�ticos para calcular o dobro.
    � Utilizar comando de sa�da para mostrar o resultado.*/

    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Twice this number is: " << number * 2;


    /*Situa��o Problema 2
    Criar um algoritmo que leia dois n�meros e informe qual � o maior entre eles.
    Requisitos:
    � Utilizar comando de entrada.
    � Usar estruturas de decis�o para determinar o maior n�mero.
    � Utilizar comando de sa�da para mostrar o resultado.*/
    int firstNumber = 0;
    int secondNumber = 0;

    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;

    if (firstNumber > secondNumber) {
        cout << "The highest number is: " << firstNumber;
    }
    else if (firstNumber == secondNumber) {
        cout << "There is no highest number";

    }
    else {
        cout << "The highest number is: " << secondNumber;
    }


    /*Situa��o Problema 3
    Criar um algoritmo que leia uma sequ�ncia de 10 n�meros inteiros e imprima o maior e o menor
    n�mero da sequ�ncia.
    Requisitos:
    � Usar vetor para armazenar os n�meros.
    � Usar estruturas de repeti��o para a leitura e verifica��o dos n�meros.
    � Utilizar comando de sa�da para mostrar os resultados. */

    int numbers[10];

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ") Enter  a number: ";
        cin >> numbers[i];
    }

    int highest = numbers[0];
    int smallest = numbers[0];

    for (int i = 1; i < 10; i++) {
        if (numbers[i] > highest) {
            highest = numbers[i];
        }
        else if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    cout << "The highest number in the sequence is: " << highest << endl;
    cout << "The smallest number in the sequence is: " << smallest << endl;

    /*Situa��o Problema 4
    Criar um algoritmo que leia uma matriz 3x3 de n�meros inteiros e calcule a soma de todos os
    elementos.
    Requisitos:
    � Usar matriz para armazenar os n�meros.
    � Usar estruturas de repeti��o aninhadas para a leitura e soma dos elementos.
    � Utilizar comando de sa�da para mostrar o resultado.  */

    int matrix[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter the element from line " << i + 1 << " and column " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];

            cout << "The sum of all matrix elements is: " << sum << endl;
        }
    }

    /*Situa��o Problema 5
   Criar um algoritmo que leia um vetor de 10 n�meros inteiros e determine quantos n�meros s�o
   pares e quantos s�o �mpares. Al�m disso, deve imprimir os n�meros pares em ordem decrescente.
   Requisitos:
   � Usar vetor para armazenar os n�meros.
   � Usar estruturas de repeti��o para a leitura e verifica��o dos n�meros.
   � Usar estruturas de decis�o para separar os n�meros pares e �mpares.
   � Utilizar comando de sa�da para mostrar os resultados.*/

    int numbers[10];
    vector<int> Even;
    vector<int> Odd;

    for (auto i = 0; i < 10; i++) {
        cout << i + 1 << ") Enter a number: ";
        cin >> numbers[i];
        cout << "\n";

        if (i % 2 != 0) {
            Odd.push_back(numbers[i]);
        }
        else {
            Even.push_back(numbers[i]);
        }
    }

    cout << "Odd numbers: ";
    for (int i = 0; i < Odd.size(); i++) {
        cout << Odd[i] << " ";
    }

    cout << "\n";
    cout << "Even numbers: ";
    for (int i = 0; i < Even.size(); i++) {
        cout << Even[i] << " ";
    }
    

    return 0;
}





        