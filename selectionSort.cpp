#include <iostream>

using namespace std;

void swap(int a, int b) {}

void findMin(int* a, int num) {}

void selectionSort(int* a, int num) {}

int main() {
	int a[] = {500, 900, 800, 100, 300, 200, 700, 400, 1000, 600};
	int num = sizeof(a)/sizeof(a[0]);
	selectionSort(a, num);
}