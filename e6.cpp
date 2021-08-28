#include <iostream>

int main() {
	//endl adalah singkatan endline atau akhirbaris
	std::cout << "halo bapak ibu" << std::endl;
	std::cout << "yang dihormati" << std::endl;

	//jika tanpa endl maka akan digabung
	std::cout << "\n\nsekalian";
	std::cout << "semoga indah" << std::endl;

	//dengan spasi
	std::cout << "\n\nsekalian";
	std::cout << " semoga indah" << std::endl;

	//dengan \n atau new line
	std::cout << "\n\nhidupnya\n";
	std::cout << "dan sejahtera";
	std::cin.get();
	return 0;
}
