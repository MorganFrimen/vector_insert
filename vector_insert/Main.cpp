#include <iostream>
#include <vector>

int main()
{
	setlocale(LC_ALL, "ru");

	std::string name;
	int number;

	std::vector<std::string> string_arr = { "hello", "world","vector" };
	for (std::string arr_s : string_arr)
		std::cout << arr_s << std::endl;

	std::cout << " \n";
	std::cout << "1 - Добавить значение : 2 - Удалить значение : 3 - Завершить программу \n";
	std::cout << " \n";
	std::cin >> number;

	switch (number)
	{
	case 1:
		std::cout << "Добавляем значение укажите Позицию и Название : \n";
		std::cin >> number >> name;
		string_arr.insert(string_arr.begin() + number, name);

		for (std::string arr_s : string_arr)
			std::cout << arr_s << std::endl;
		break;
	case 2:
		std::cout << "Какую позицию удалить введите номер : \n";
		std::cin >> number;
		string_arr.erase(string_arr.begin() + number);

		for (std::string arr_s : string_arr)
			std::cout << arr_s << std::endl;
		break;
	default:
		std::cout << "Завершение программы : " << "\n";
		break;
	}
}