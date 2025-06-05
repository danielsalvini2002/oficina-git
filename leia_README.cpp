#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cout << "Insira a sua idade: ";
	cin >> a;
	cout << "\n" << "Digite sua idade subtraindo 2: ";
	cin >> b;
	cout << "\n" << "Agora digite sua idade adicionando 2: ";
	cin >> c;
	if (a != c)
		cout << "\nNão sei oq tu fez ai, mas show d bola, a matemática n fechou não" << endl;
	else
		cout << "Parabéns! Essa é a sua idade" << endl;
	return 0;
}
