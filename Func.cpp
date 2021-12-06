#include <iostream>
#include <Windows.h>
#include <string>






void hello_p(int tray_num){
	std::cout << tray_num * 2 << std::endl;
}

int main() {


	int tray_num=0;
	std::cin >> tray_num;
	hello_p(tray_num);

}