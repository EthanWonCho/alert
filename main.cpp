#include <iostream>
#include <Windows.h>
int main() {
	for (;;) {
		std::cout << "\a";
		Sleep(500);
	}
}
