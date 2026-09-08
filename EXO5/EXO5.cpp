#include <cstdio>
#include <iostream>
#include <random>
#include <vector>
using namespace std;


void main() {
	int c = 0;
	string car;
	cout << "Entrez une chaine de caractère avec des minuscules et majuscules ";
	cin >> car;
	for (int i = 0; i < car.length(); i++) {
		if (car[i] > 96) {
			car[i] = car[i] - 32;
			c++;


		}
	}
	printf("la chaine renvoie %s", car.c_str() );
	printf("compteur = %d", c);
}