/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	string temp;
	int num1, num2, num3, soma = 0;

	ifstream meuArquivo("numbers.txt");
	if (meuArquivo.is_open()) {
		while (meuArquivo.good()) {
			getline(meuArquivo, temp);
			if (temp.size() > 0) {
				soma += atoi(temp.c_str());
			}
		}
		meuArquivo >> soma ;
	}

	cout << soma << endl;

	meuArquivo.close();

	system("pause");
	return 0;
}*/