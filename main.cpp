#include <iostream>
#include <string>

using namespace std;

bool checkIfPalindrome (int integer);

int main() {
	int newProduct; int oldProduct = 0;

	for (int first = 0; first < 100; ++first) {
		for (int second = 0; second < 100; ++second) {
			newProduct = first * second;

			if (checkIfPalindrome(newProduct) == 1 && newProduct > oldProduct) {
				oldProduct = newProduct;
			}
		}
	}

	// cout << firstMult << " * " << secondMult << " = " << oldProduct << '\n';
	cout << "The largest palildrome of any two-digit number is " << oldProduct << '\n';

	cout << "\n\n";
	system("PAUSE");
	return 0;
}

bool checkIfPalindrome (int integer) {
	string intString = to_string(integer);
	char* charArray = &intString[0];
	for (int i = 0; i < intString.length(); ++i) {
		if (charArray[i] == charArray[intString.length() - i]) {
			if (*(&charArray + i) == *(&charArray - (intString.length() - i))) {
				return true;
			}
		}
	}

	return false;
}

/*
charArrray[4] = "abba';
int ctr1 =0; int ctr2 = 3 (max of string)
if (cArray[ctr1] == cArray[ctr2]) {
	if (ctr1 == ctr2) {
	palindrome = 1;
	}
	++ctr1; --ctr2;
}

else {
	bool palindrome = 0;
}
*/