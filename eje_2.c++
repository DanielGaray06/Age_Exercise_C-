# include <iostream>
#include <windows.h>

using namespace std;

main (){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int cant;
	cout << "Ingrese la cantidad de productos: ";
	cin >> cant;
	
	int prec;
	cout << "Ingrese el precio del producto: $";
	cin >> prec;
	
	int subTotal = cant * prec ;
	int iva = subTotal * 0.19;
	int total =  subTotal + iva;
	
	cout << "El Subtotal a pagar es de: " << subTotal << "\n";
	cout << "El valor del IVA es de: " << iva << "\n";
	cout << "El valor total a pagar con IVA es de: " << total << "\n";
	
	return 0;
	system("pause");
}