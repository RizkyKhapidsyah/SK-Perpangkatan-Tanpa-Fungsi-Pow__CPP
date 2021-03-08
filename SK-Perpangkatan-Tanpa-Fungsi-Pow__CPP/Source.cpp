#include <iostream>
#include <conio.h>

using namespace std;

unsigned long int integerPower(int base, unsigned int power) {
	unsigned long int val = base;

	for (unsigned long int i = 0; i < power - 1; i++) {
		val = val * base;
	}

	return val;
}

int main() {
	int base;
	unsigned int power;
	unsigned long int val = 0;

	cout << "\n Masukkan Angka (non 0) : ";
	cin >> base;

	cout << "\n Masukkan Nilai Pangkat (positif) : ";
	cin >> power;

	val = integerPower(base, power);

	cout << "\n Hasilnya adalah: " << val;

	_getch();
	return 0;
}