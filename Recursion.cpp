/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 5.7.2017
 *
 * Description: This is the member function file that hosts
 * all the guts of the functions used in the main.cpp file.
 * In here we make a function that takes in string, and prints
 * out the reverse of the string. Another function that takes
 * in an array and size of the array, and then prints out the
 * total sum of the array added up.  Lastly there is a function
 * that takes in a row value, and returns the total number of
 * "pins" required to make that triangle.
**************************************************************/

#include "Recursion.hpp"


/**************************************************************
 *                  stringReverse()
 *	This function takes in a single string, and will then print
 *	out the the string reversed by using recursion to iterate
 *	through each step.
**************************************************************/
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
}


/**************************************************************
 *                  arrTotalSum()
 *	This function takes in two integers. One being an array of
 *	ints and the other being the size of that array.  From there
 *	the application uses recursion to loop through all values,
 *	adding them up one by one and return the total.
**************************************************************/
int arrTotalSum(int userInt[], int arraySize) {
	if (arraySize < 0) {
		return 0;
	}
	else {
		return userInt[arraySize] + arrTotalSum(userInt, arraySize -1);
	}

}


/**************************************************************
 *                  triangularNum()
 *	This function takes in a single integer, which relates to
 *	the total number of rows.  It will then calculate and
 *	use recursion to return the number of "pins" required to
 *	make a triangle with that many rows.
**************************************************************/
int triangularNum(int userRows) {
	if (userRows == 0) {
		return 0;
	}
	else {
		return userRows + triangularNum(userRows - 1);
	}

}