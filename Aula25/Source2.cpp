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
	int multi = 0;
	int a, b;

	ifstream meuArquivo("multi.txt");
	if (meuArquivo.is_open()) {
		while (meuArquivo.good()) {
			getline(meuArquivo, temp);
			if (temp.size() > 0) {
				istringstream iss(temp);
				iss >> a >> b;
				multi = a * b;
				cout << multi << endl;
			}
		}
	}

	meuArquivo.close();

	system("pause");
	return 0;
}*/