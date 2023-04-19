#include <iostream>
#include <string>
using namespace std;
class Bus {
public:
	string brand;
	string number;
	int price;
	int count;
	Bus() {

	}
	Bus(string brand, string number, int price, int count) {

	}
	string convert() {
		return brand + ": number = " + number;

	}
};

for (int i = 0, i < SIZE - 1; i++) {
	for (int j = 0; i < SIZE - 1; j++) {
		if (buses[i].price) {

		}
	}
}
// call business logic

// ouput result
for (int i = 0, i < SIZE - 1; i++) {
	cout << buses[i].convert() << "---->" << buses[i].price() / buses[i + 1].count << endl;
}
return 0;
}
