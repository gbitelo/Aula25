/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <locale.h>
//Identificamos se um n�mero � par ou �mpar quando o dividimos por dois. Se o resto da divis�o for zero, o n�mero � par; 
//caso contr�rio, � �mpar.
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	string temp;
	int multi = 0, soma = 0;
	int a, b;
	int pos = 0;

	ifstream meuArquivo("arq.txt");
	if (meuArquivo.is_open()) {
		while (meuArquivo.good()) {
			getline(meuArquivo, temp);
			if (temp.size() > 0) {
				istringstream iss(temp);
				iss >> a >> b;
				if (pos % 2 != 0) //posi��o inicia com zero e o != est� negando esse valor
				{
					multi = a * b;
					cout << multi << endl;
				} else {
					soma = a + b;
					cout << soma << endl;
				}
				pos++; // vai adicionando 1 � posi��o
			}
		}
	}

	meuArquivo.close();

	system("pause");
	return 0;
}*/