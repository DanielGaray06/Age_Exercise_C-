# include <iostream>

using namespace std;

int main(){
	int edad;
	cout << "Ingrese su Edad: ";
	cin >> edad;
	
	if (edad > 0){
		if (edad < 18){
			cout << "\n Eres menor de edad (Rango de 1 a 17 años) \n";
		}else{
			if (edad < 60){
				cout << "\n Eres mayor de edad (Rango de 18 a 59 años) \n";
			}else{
				cout << "\n Eres de la tercera edad (Rango de 60 a ... años) \n";
			}
		}
	}else{
		cout << "Edad no valida, debe ser mayor a 0";
	}
}
