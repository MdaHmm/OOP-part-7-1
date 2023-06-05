#include <iostream>

// UTF-8

// Перегрузка операторов
// linked list


//	node - звено
//	односвязный список
//	10							-> 12						-> ...
//	ссылка на следующий объект   -> ссылка на след объект	->
//	tale -----------------------------------------------------> head


class Digit
{
private:
	int _data;
public:

	Digit(int data) : _data(data) {}

	int operator+(Digit &digit)
	{
		return _data + digit._data;
		//return _data - digit._data + digit._data * digit._data / digit._data;
	}

	int operator-(Digit& digit)
	{
		if (_data < digit._data)
			return digit._data - _data;
		return _data - digit._data;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	
	Digit digit(5);
	Digit digit2(10);
	std::cout << digit.operator+(digit2) << "\n";
	std::cout << digit.operator-(digit2) << "\n";
	std::cout << digit - digit2 << "\n";
	//std::cout << digit + 123 << "\n";
	


	return 0;
}