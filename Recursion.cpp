//
// Created by Neil on 5/2/2017.
//

#include "Recursion.hpp"


void stringReverse(std::string userString) {
	int strLength = userString.length();
	static int count = 0;

	if (count < strLength - 1) {
		count ++;
		stringReverse(userString);
	}
	if (count == 0) {
		std::cout <<userString[count] << "\n" << std::endl;
	}
	else {
		std::cout << userString[count];
		count--;
	}



	/*
	char reverse(std::string revString, int arrSize) {
		if (arrSize > 0) {
			reverse(revString, arrSize - 1);
		}
		return reversedString += revString[arrSize];
	}

	reverse(userString, strSize);
	*/




}

int arrTotalSum(int userInt[], int arraySize) {
	if (arraySize < 0) {
		return 0;
	}
	else {
		return userInt[arraySize] + arrTotalSum(userInt, arraySize -1);
	}

}

int triangularNum(int userRows) {
	if (userRows == 0) {
		return 0;
	}
	else {
		return userRows + triangularNum(userRows - 1);
	}

}