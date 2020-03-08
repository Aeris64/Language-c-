#include <iostream>
#include <vector>
#include <calculatrice.h>

using namespace std;

float calcPlus(float nb1, float nb2){
	return nb1+nb2;
}

float calcMoins(float nb1, float nb2){
	return nb1-nb2;
}

float calcFois(float nb1, float nb2){
	return nb1*nb2;
}

float calcDiv(float nb1, float nb2){
	return nb1/nb2;
}

bool verifImpair(int nb){
	bool res = true;

	if(nb % 2 == 0) res = false;

	return res;
}

int fibonacci(){
	int tempNum = 0, num = 1, res = 0;
	bool next = false;

	do{
		res = num+tempNum;
		tempNum = num;
		num = res;
		cout << "Voulez-vous continuer ? (0 - Non / 1 - Oui) Résultat actuel : " << res << endl;
		string answer;
		getline(cin,answer);
		if(answer == "0") next = true;
	}while(!next);

	cout << res << endl;
}

int fibonacciNumber(){
	string answer;

	cout << "Combien voulez-vous d'occurence ?" << endl;
	getline(cin,answer);
	int nb = stoi(answer);
	int res[nb];
	int tempNum = 0, num = 1, i = 0;

	do{
		res[i] = num+tempNum;
		tempNum = num;
		num = res[i];
		i++;
	}while(i < nb);

	cout << "--------------------" << endl;

	i = 0;
	while(i < nb){
		cout << res[i] << endl;
		i++;
	}
}

int* fibonacciNumber2Help(int nb){
	int res[nb];
	int tempNum = 0, num = 1, i = 0;
	bool next = false;

	do{
		res[i] = num+tempNum;
		tempNum = num;
		num = res[i];
		i++;
	}while(i < nb);

	return res;
}

int fibonacciNumber2(){
	// vector<int*> finalRes();
	// string answer;

	// int tempNum = 0, num = 1, x = 0;

	// cout << "--------------------" << endl;

	// do{
	// 	cout << "--------------------" << endl;
	// 	cout << "Combien voulez-vous d'occurence ?" << endl;
	// 	getline(cin,answer);
	// 	int nb = stoi(answer);
	// 	finalRes = fibonacciNumber2Help(nb);
	// 	int i = 0;
	// 	while(i < nb){
	// 		cout << res[i] << endl;
	// 		i++;
	// 	}
	// }while(i < nb);
}