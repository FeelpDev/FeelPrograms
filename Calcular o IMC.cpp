#include <iostream>

using namespace std;

int main()
{
	float alt, peso, imc;
	cout<< "Informe seu peso atual.: ";
	cin>> peso;
	cout<< "informe sua altura.: ";
	cin>> alt;
	imc= peso/(alt*alt);
	cout<< "Seu IMC eh de.: " << imc;
	return 0;
}
