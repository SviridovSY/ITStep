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
	std::string user = "Игрок:";	

	std::cout << "Hачнём беседу? =))" << std::endl;
	std::cout << user << " ";
	std::cin >> start;
	std::cout << "Назови своё имя:" << std::endl;
	std::cout << user << " ";
	std::cin >> user_name;
	std::cout << "Привет, " << user_name << "! Укажи, пожалуйста, сколько тебе лет? -> " << std::endl;
	std::cout << user <<" ";
	std::cin >> age;
	std::cout << "О! " << age << "! Такой прекрасный возраст!" << std::endl;
	std::cout << user_name << ", подскажи нам, кем ты работаешь в возрасте " << age << " лет?" << std::endl;
	std::cout << user << " ";
	std::cin >> user_profession;
	std::cout << user_profession << "!!! Надо же!" << std::endl;
	std::cout << "И сколько лет ты работаешь в должности - " << user_profession << "?" <<std::endl;
	std::cout << user << " ";
	std::cin >> amount;
	std::cout << "Супер! " << amount << "!" << std::endl;
	std::cout << "Ну а теперь вопрос!)) " << " Хочешь узнать сколько получиться, если умножить твой возраст на количество лет в данной профессии?" << std::endl;
	std::cout << user << " ";
	std::cin >> start;
	std::cout << age * amount << std::endl;
}


//std::cout << "Magic" << std::endl;
	//std::cout << "Дамблдор" << std::endl;
	//std::cout << "Потный Гарри" << std::endl;
	//std::cout << "Хогвартс" << std::endl;
	//std::cout << "Мяч" << std::endl;

	//int x = 5;
	//std::cout << "Before: " << x << std::endl;
	//x = 6;
	//std::cout << "After: " << x << std::endl;
	//std::cout << "Vvedite 9" << std::endl;
	//std::cin >> x;
	//std::cout << "My value: " << x << std::endl;
//setlocale(LC_ALL, "Russian");

