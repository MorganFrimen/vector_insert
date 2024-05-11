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
	std::cout << "1 - �������� �������� : 2 - ������� �������� : 3 - ��������� ��������� \n";
	std::cout << " \n";
	std::cin >> number;

	switch (number)
	{
	case 1:
		std::cout << "��������� �������� ������� ������� � �������� : \n";
		std::cin >> number >> name;
		string_arr.insert(string_arr.begin() + number, name);

		for (std::string arr_s : string_arr)
			std::cout << arr_s << std::endl;
		break;
	case 2:
		std::cout << "����� ������� ������� ������� ����� : \n";
		std::cin >> number;
		string_arr.erase(string_arr.begin() + number);

		for (std::string arr_s : string_arr)
			std::cout << arr_s << std::endl;
		break;
	default:
		std::cout << "���������� ��������� : " << "\n";
		break;
	}
}