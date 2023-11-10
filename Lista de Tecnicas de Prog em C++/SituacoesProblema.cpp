#include <iostream>
#include <vector>

using namespace std;

/*Situação Problema 6
Criar um algoritmo que leia uma matriz 3x3 de números inteiros e determine a soma da diagonal
principal. Se essa soma for ímpar, o algoritmo deve imprimir a matriz transposta, caso contrário,
deve imprimir a matriz original.
Requisitos:
• Usar matriz para armazenar os números.
• Usar estruturas de repetição aninhadas para a leitura dos elementos e cálculo da soma da diagonal.
• Usar estruturas de decisão para verificar se a soma é ímpar ou par.
• Implementar uma função para calcular a matriz transposta.
• Utilizar comando de saída para mostrar a matriz resultante.*/

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

    // Verifica se a soma da diagonal principal é ímpar
    if (sumDiagonal % 2 != 0) {
        // Se for ímpar, calcular e imprimir a matriz transposta
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



    /*Situação Problema 1
    Criar um algoritmo que lê um número inteiro e imprime o dobro desse número.
    Requisitos:
    • Utilizar comando de entrada.
    • Utilizar operadores aritméticos para calcular o dobro.
    • Utilizar comando de saída para mostrar o resultado.*/

    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Twice this number is: " << number * 2;


    /*Situação Problema 2
    Criar um algoritmo que leia dois números e informe qual é o maior entre eles.
    Requisitos:
    • Utilizar comando de entrada.
    • Usar estruturas de decisão para determinar o maior número.
    • Utilizar comando de saída para mostrar o resultado.*/
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


    /*Situação Problema 3
    Criar um algoritmo que leia uma sequência de 10 números inteiros e imprima o maior e o menor
    número da sequência.
    Requisitos:
    • Usar vetor para armazenar os números.
    • Usar estruturas de repetição para a leitura e verificação dos números.
    • Utilizar comando de saída para mostrar os resultados. */

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

    /*Situação Problema 4
    Criar um algoritmo que leia uma matriz 3x3 de números inteiros e calcule a soma de todos os
    elementos.
    Requisitos:
    • Usar matriz para armazenar os números.
    • Usar estruturas de repetição aninhadas para a leitura e soma dos elementos.
    • Utilizar comando de saída para mostrar o resultado.  */

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

    /*Situação Problema 5
   Criar um algoritmo que leia um vetor de 10 números inteiros e determine quantos números são
   pares e quantos são ímpares. Além disso, deve imprimir os números pares em ordem decrescente.
   Requisitos:
   • Usar vetor para armazenar os números.
   • Usar estruturas de repetição para a leitura e verificação dos números.
   • Usar estruturas de decisão para separar os números pares e ímpares.
   • Utilizar comando de saída para mostrar os resultados.*/

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





        