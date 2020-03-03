#include <string>
using namespace std;

int main() {
	//Ex declaração de variável

//criando um tipo de dado
	struct minhaData {
		int dia;
		string mes;
		int ano;
	};
	struct posicao {
		float x;
		float y;
	};

	//tipo dado / nome variavel
	string nome;
	int idade;
	minhaData hoje;

	hoje.dia = 3;
	hoje.mes = "Março";
	hoje.ano = 2020;

	string cpfFormatado;	// xxx.xxx.xxx-xx
	int cpf;	// xxxxxxxxxxx

	string aniversario;

	int numVidas;
	float saude; //permitir que tenha meio coração de vida
	bool vivo;
	bool usandoPowerUp;

	const int capacidadeTanqueCombustivel = 50;

	float velocidadeCarro;
	char tipoCarro; //'H' - hatch / 'S' - sedan
	char categoria; //'C' - Carnívora / 'H' - Herbívoro
	
	int numroPowerUps;

	float porcentagemForca;
	float preco;
	int quantidadeDeItens;

	int qtdeItens;
	bool itemDisponivel;

	float posX, posY;

	posicao p;
	p.x = 82.5;
	p.y = 20.4;

	float anguloRotacao; //pode haver uma p/ cada eixo
	int idCasaTabuleio; //jogo da vida

	int posX, posY; //damas

	string cor;
	int custoInvocacao;
	bool temFalha;

	return 0;

}





