#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	int x, y;
	std::cout << "������� � ���������.\n������� ������ �����: ";
	std::cin >> x;
	std::cout << "������� ������ �����: ";
	std::cin >> y;
	int* px = &x;
	int* py = &y;
	int res = (*px + *py) / 2;
	std::cout << "������� �������������� ���������� " << res << "\n";

	return 0;
}