#include <cstdio>
#include <iostream>
#include <random>
#include <string>
using namespace std;

void main() {
	float t[10];
	float somme = 0;
	std::srand(std::time(nullptr));
	for (int i = 0; i < 10; i++) {
		t[i] = rand();
		std::cout << t[i] << std::endl;
		somme += t[i];

	}
	std::cout << somme << std::endl;
}



