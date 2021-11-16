// Difference between reference and built-in type conversion/initialization

#include <iostream>
using namespace std;

int main() {
	
    // Compiles: Because of implicit type conversion
    const int y = 5;
	int x {y};

    // DOESNT Compile because L value references can only be initialized by modifiable L value references.
    // const int & y = 5;
	// int & x {y};
    // int & z {5};

	cout << y << endl;
	return 0;
}
