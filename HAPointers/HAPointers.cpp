#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	int x, y;
	std::cout << "¬водна€ в указатели.\n¬ведите первое число: ";
	std::cin >> x;
	std::cout << "¬ведите второе число: ";
	std::cin >> y;
	int* px = &x;
	int* py = &y;
	int res = (*px + *py) / 2;
	std::cout << "—реднее арифметическое составл€ет " << res << "\n";

	return 0;
}