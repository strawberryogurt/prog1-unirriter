#include <iostream>
using namespace std;

void CalculaCarro(float custoBase) {
	//constantes
	const float perImposto = 45;
	const float perComissao = 28;

	//definir valores
	float comissaoVendedor;
	float valorImposto;
	float custoCliente;

	//Calcular Valores C1
	valorImposto = custoBase * perImposto / 100;
	comissaoVendedor = custoBase * perComissao / 100;
	custoCliente = custoBase + valorImposto + comissaoVendedor;

	//mostrar resultados
	cout << "-- Detalhamento Valores C1-- \n \n \n";
	cout << "Valor Final Consumidor: " << custoCliente << endl;
	cout << "Custo base Fabrica: " << custoBase << endl;
	cout << "Impostos: " << valorImposto << endl; 
}

int main() {
	float custoBase = 22980.74;

	CalculaCarro(custoBase);

	system("pause");
	return 0;
}