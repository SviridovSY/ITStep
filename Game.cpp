#include <iostream>
#include <Windows.h>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);	

	std::string user_name;
	int age;
	float amount;
	std::string user_profession;
	std::string start;
	std::string user = "�����:";	

	std::cout << "H���� ������? =))" << std::endl;
	std::cout << user << " ";
	std::cin >> start;
	std::cout << "������ ��� ���:" << std::endl;
	std::cout << user << " ";
	std::cin >> user_name;
	std::cout << "������, " << user_name << "! �����, ����������, ������� ���� ���? -> " << std::endl;
	std::cout << user <<" ";
	std::cin >> age;
	std::cout << "�! " << age << "! ����� ���������� �������!" << std::endl;
	std::cout << user_name << ", �������� ���, ��� �� ��������� � �������� " << age << " ���?" << std::endl;
	std::cout << user << " ";
	std::cin >> user_profession;
	std::cout << user_profession << "!!! ���� ��!" << std::endl;
	std::cout << "� ������� ��� �� ��������� � ��������� - " << user_profession << "?" <<std::endl;
	std::cout << user << " ";
	std::cin >> amount;
	std::cout << "�����! " << amount << "!" << std::endl;
	std::cout << "�� � ������ ������!)) " << " ������ ������ ������� ����������, ���� �������� ���� ������� �� ���������� ��� � ������ ���������?" << std::endl;
	std::cout << user << " ";
	std::cin >> start;
	std::cout << age * amount << std::endl;
}


//std::cout << "Magic" << std::endl;
	//std::cout << "��������" << std::endl;
	//std::cout << "������ �����" << std::endl;
	//std::cout << "��������" << std::endl;
	//std::cout << "���" << std::endl;

	//int x = 5;
	//std::cout << "Before: " << x << std::endl;
	//x = 6;
	//std::cout << "After: " << x << std::endl;
	//std::cout << "Vvedite 9" << std::endl;
	//std::cin >> x;
	//std::cout << "My value: " << x << std::endl;
//setlocale(LC_ALL, "Russian");

