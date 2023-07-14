#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	float saldototal[1000], saque, dep;
	int menu, conta[1000], cont=0;
	
	cout << fixed << setprecision(2);
	while(cont < 1000){
	cout << "\tSeja Bem Vindo\n";
	cout << "Informe o número de sua conta: ";
	cin >> conta[cont];
	do{
		cout << "\t\nSelecione uma das opções abaixo:\n";
		cout << "\n1 - Saldo\n";
		cout << "2 - Saque\n";
		cout << "3 - Depósito\n";
		cout << "4 - Sair\n";
		cin >> menu;
	if(menu == 1){
		cout << "Saldo atual é: ";
		cout << saldototal[cont];
		}
	else if(menu == 2){
		cout << "Digite valor para saque: ";
		cin >> saque;
		if(saque > saldototal[cont]){
		cout << "Saldo para conta de número " << conta[cont] << " indisponível.\n";
		}
		else{
		saldototal[cont]=saldototal[cont]-saque;
		}
		cout << "Saldo total atual da conta " << conta[cont] << " é de ";	
		cout << saldototal[cont] << " reais.\n";
		}
	else if(menu == 3){
		cout << "Digite valor a ser depositado: ";
		cin >> dep;
		saldototal[cont] = saldototal[cont]+dep;
		cout << "Saldo total atual da conta " << conta[cont] << " é de " << saldototal[cont] << " reais.\n";
		}
	else if(menu > 4 || menu < 1){
		cout << "Opção inválida\n";
		}
	}while(menu !=4);
	cout << "\t! Obrigado por utilizar nossos serviços !\n\n";
	cont ++;
	}	
	return 0;
}
