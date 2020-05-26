#include <stdio.h>
#include <conio.h>

void towers(int n, char awal, char akhir, char antara) {
	if (n == 1) {
		printf("Pindahkan Piringan 1 dari %c ke %c\n", awal, akhir);
	}
	else
	{
		towers(n - 1, antara, awal, akhir);
		printf("Pindahkan Piringan %d dari %c ke %c\n", n, awal, akhir);
		towers(n - 1, antara, akhir, awal);
	}
}

int main() {
	int n;
	printf("Berapa Piringan ?  "); scanf_s("%d", &n);
	towers(n, 'A', 'C', 'B');

	_getch();
	return 0;
}