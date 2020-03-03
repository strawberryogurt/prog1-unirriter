#include <iostream>
using namespace std;

int main() {

	//constantes
	const float perImposto = 45;
	const float perComissao = 28;

	//definir valores
	float custoBaseC1 = 22980.74;
	float custoBaseC2 = 40580.72;
	float custoBaseC3 = 67530.00;
	float comissaoVendedor1;
	float comissaoVendedor2;
	float comissaoVendedor3;
	float valorImposto1;
	float valorImposto2;
	float valorImposto3;
	float custoCliente1;
	float custoCliente2;
	float custoCliente3;

	//Calcular Valores C1
	valorImposto1 = custoBaseC1 * perImposto / 100;
	comissaoVendedor1 = custoBaseC1 * perComissao / 100;
	custoCliente1 = custoBaseC1 + valorImposto1 + comissaoVendedor1;

	valorImposto2 = custoBaseC2 * perImposto / 100;
	comissaoVendedor2 = custoBaseC2 * perComissao / 100;
	custoCliente2 = custoBaseC2 + valorImposto2 + comissaoVendedor2;

	valorImposto3 = custoBaseC3 * perImposto / 100;
	comissaoVendedor3 = custoBaseC3 * perComissao / 100;
	custoCliente3 = custoBaseC3 + valorImposto3 + comissaoVendedor3;

	//mostrar resultados
	cout << "-- Detalhamento Valores C1-- \n \n \n";
	cout << "Valor Final Consumidor: " << custoCliente1 << endl;
	cout << "Custo base Fabrica: " << custoBaseC1 << endl;
	cout << "Impostos: " << valorImposto1 << endl; 

	cout << "-- Detalhamento Valores C2-- \n \n \n";
	cout << "Valor Final Consumidor: " << custoCliente2 << endl;
	cout << "Custo base Fabrica: " << custoBaseC2 << endl;
	cout << "Impostos: " << valorImposto2 << endl;

	cout << "-- Detalhamento Valores C3-- \n \n \n";
	cout << "Valor Final Consumidor: " << custoCliente3 << endl;
	cout << "Custo base Fabrica: " << custoBaseC2 << endl;
	cout << "Impostos: " << valorImposto3 << endl;



	system("pause");
	return 0;
}