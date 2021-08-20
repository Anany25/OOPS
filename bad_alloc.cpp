#include <iostream>
using namespace std;

class wontGoWrong {
public:
    wontGoWrong(){
        char *pMemory1 = new char[999];
        delete[] pMemory1;
    }
};

class canGoWrong {
public:
	canGoWrong() {
		char *pMemory2 = new char[999999999999999];
		delete[] pMemory2;
	}
};

int main() {

    try {
		wontGoWrong wrong;
	}
	catch(bad_alloc &e) {
		cout << "Caught exception: " << e.what() << endl;
	}

	try {
		canGoWrong wrong;
	}
	catch(bad_alloc &e) {
		cout << "Caught exception: " << e.what() << endl;
	}

	return 0;
}
