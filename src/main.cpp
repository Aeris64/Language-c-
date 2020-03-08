#include <iostream>
#include <vector>
// #include <calculatrice.h>

using namespace std;

void showAdress(string var){
	cout << &var << endl;
}

void showVar(string var){
	cout << var << endl;
}

void swap(string var1, string var2){
	string tempVar = *&var1;
	var1 = *&var2;
	var2 = *&tempVar;

	cout << "var 1 : " << var1 << "| var2 : " << var2 << endl;
}

void getMinMax(int tab[], int nb, int min, int max){
	int i = 0;
	do{
		if(tab[i] < min){
			*&min = *&tab[i];
		}

		if(tab[i] > max){
			*&max = *&tab[i];
		}

		i++;
	}while(i < nb);

	cout << "minTab  = " << min << " | maxTab = " << max << endl;
	cout << "Tab : " << *&tab << endl;
}

void setTab(int tab[]){
	int i = 0;

	do{
		cout << "Instant remplissage tableau" << endl;
		cin >> tab[i];

		i++;
	}while(i < 5);

	i = 0;

	do{
		cout << "Occurence number " << i << " = " << tab[i] << endl;

		i++;
	}while(i < 5);
}

int main(int argc, char *argv[]) {
	/*string name;
	int testInt = 1;
	bool testBol = true;
	char testChar = 'U';

	getline(cin,name);
	cout << "Hello " << name << " !!" << endl;

	cout << "TestInt : " << testInt << endl;
	// testInt = {0.10};
	cout << "TestInt : " << testInt << endl;

	cout << "TestBol : " << testBol << endl;
	cout << "TestChar : " << testChar << endl;

	return 0;*/

	float testNumber1 = 6, testNumber2 = 3;

	/*cout << calcPlus(testNumber1, testNumber2) << endl;
	cout << calcMoins(testNumber1, testNumber2) << endl;
	cout << calcFois(testNumber1, testNumber2) << endl;
	cout << calcDiv(testNumber1, testNumber2) << endl;
	cout << verifImpair(testNumber1) << endl;
	cout << verifImpair(testNumber2) << endl;
	fibonacci();
	fibonacciNumber();*/
	showAdress("Hello");

	string someVar = "Hello World";
	string someVar2 = "World hello";
	showVar(someVar);
	swap(someVar, someVar2);

	int nb = 5, min = 100, max = -100;
	int tab[nb];
	tab[0] = 4;
	tab[1] = 5;
	tab[2] = 3;
	tab[3] = -1;
	tab[4] = 1;
	getMinMax(tab, nb, min, max);

	int tabEmpty[nb];
	setTab(tabEmpty);
}