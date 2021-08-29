#include <limits>
#include <iostream>

int main() {

	// bilangan bulat
	// integer
	int a = 5; //32-bit
	unsigned int i = 5; //32-bit

	std::cout << a << std::endl;
	std::cout << sizeof(a) << " byte" << std::endl;
	std::cout << std::numeric_limits<int>::max() << std::endl;
	std::cout << std::numeric_limits<int>::min() << std::endl;

std::cout << i << std::endl;
	std::cout << sizeof(i) << " byte" << std::endl;
	std::cout << std::numeric_limits<unsigned int>::max() << std::endl;
	std::cout << std::numeric_limits<unsigned int>::min() << std::endl;

	// lebih panjang (long)
	long b = 6; //64-bit

	std::cout << b << std::endl;
	std::cout << sizeof(b) << " byte" << std::endl;
	std::cout << std::numeric_limits<long>::max() << std::endl;
	std::cout << std::numeric_limits<long>::min() << std::endl;

	// lebih pendek (short)
	short c = 7; //16-bit

	std::cout << c << std::endl;
	std::cout << sizeof(c) << " byte" << std::endl;
	std::cout << std::numeric_limits<short>::max() << std::endl;
	std::cout << std::numeric_limits<short>::min() << std::endl;

	// bilangan desimal
	float d = 1.0;
	double e = 2.5;

	// character
	char f = 'a'; 

	// boolean
	bool g = true;
	bool h = false;

	std::cin.get();
	return 0;
}
