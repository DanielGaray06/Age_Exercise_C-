# include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

main (){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	float cateto1, cateto2, hipotenusa;

    cout << "Ingrese el primer cateto: ";
    cin >> cateto1;

    cout << "Ingrese el segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    cout << "La hipotenusa es: " << hipotenusa << "\n";
	
	
	return 0;
	system("pause");
}