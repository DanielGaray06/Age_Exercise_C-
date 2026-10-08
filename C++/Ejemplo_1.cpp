# include <iostream>

using namespace std;

int main(){
	int num;
	cout << "Ingrese un numero: ";
	cin >> num;
	
	if (num == 0){
		cout << "\n\033[32m El numero ingresado es Neutro \n \033[0m";
	}else{
		if (num > 0){
			cout << "\n\033[33m El numero ingresado es Positivo \n \033[0m";
		}else {
			cout << "\n\033[31m El numero ingresado es Negativo \n \033[0m";
		}
	}
	return 0;
}
