#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <locale.h>

using namespace std;

class Produto {
	string nome;
	int tamanho;
	float valor;
	string categoria;
public:
	string getNome() { return this->nome; }
	void setNome(string nome) {
		this->nome = nome;
	}
	int getTamanho() { return this->tamanho; }
	void setTamanho(int tamanho) {
		this->tamanho = tamanho;
	}
	float getValor() { return this->valor; }
	void setValor(float valor) {
		this->valor = valor;
	}
	string getCategoria() { return this->categoria; }
	void setCategoria(string categoria) {
		this->categoria = categoria;
	}
};

class Categoria {
	string nome;
	string estilo_uso;
public:
	string getNome() { return this->nome; }
	void setNome(string nome) {
		this->nome = nome;
	}
	string getEstilo_uso() { return this->estilo_uso; }
	void setEstilo_uso(string estilo_uso) {
		this->estilo_uso = estilo_uso;
	}
};

int main() {
	setlocale(LC_ALL, "Portuguese");

	Produto p1;
	p1.setNome("Catuaba");
	cout << p1.getNome() << endl;
	p1.setTamanho(2);
	cout << p1.getTamanho() << endl;
	p1.setValor(2.50);
	cout << p1.getValor() << endl;
	p1.setCategoria("Bebida acoolica");
	cout << p1.getCategoria() << endl;

	Categoria c1;
	c1.setNome("Álcool");
	cout << c1.getNome() << endl;
	c1.setEstilo_uso("Bebados");
	cout << c1.getEstilo_uso() << endl;

	ofstream myfile;
	myfile.open("file.txt");
	myfile << p1.getNome() << endl;
	myfile << p1.getTamanho() << endl;
	myfile << p1.getValor() << endl;
	myfile << p1.getCategoria() << endl;
	myfile << c1.getNome() << endl;
	myfile << c1.getEstilo_uso() << endl;
	myfile.close();

	system("pause");
	return 0;
}