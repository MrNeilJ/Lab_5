/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 5.7.2017
 *
 * Description: This is the main function for a variety of
 * functions that demonstrate different types of recursion.
 * The examples consist of one for a string reverser, an
 * array sum calculator, and a function that calculates the
 * triangular value.
**************************************************************/

#include <iostream>
#include "menuMaker.hpp"
#include "inputCheck.hpp"
#include "Recursion.hpp"

int main() {
	// Print the main screen
	std::cout << "***********************************" << std::endl;
	std::cout << "*       Recursion Simulator       *" << std::endl;
	std::cout << "***********************************" << std::endl;
	std::cout << "Welcome to the recursion simulator, here we will be" 	<< std::endl;
	std::cout << "demonstrating some basic examples of recursion.\n"		<< std::endl;

	menuMaker mainMenu(	"Please select from one of the three examples below:",
						"String Reverser",
						"Array Total Sum",
						"Triangular Number Calculator",
						"Quit");


	int mainResponse = -1;

	do {
		mainMenu.prompt();
		mainResponse = mainMenu.getResponse();

		if (mainResponse == 1) {
			// Run the String reverser class
			std::cout << "***********************************" 				<< std::endl;
			std::cout << "*         String Reverser         *" 				<< std::endl;
			std::cout << "***********************************" 				<< std::endl;
			std::cout << "Welcome to the String Reverser, here we will be" 	<< std::endl;
			std::cout << "demonstrating how to reverse a string.\n"			<< std::endl;

			std::cout << "Please type in a string you'd like reversed:" 	<< std::endl;
			std::string userString = getString();

			std::cout << "Here are the results!" 							<< std::endl;
			std::cout << "----------------------------------" 				<< std::endl;
			std::cout << "Before:"											<< std::endl;
			std::cout << userString << "\n" 								<< std::endl;

			std::cout << "After: "											<< std::endl;
			stringReverse(userString);

		}
		else if (mainResponse == 2) {
			// Run the Array Total Sum Class
			std::cout << "***********************************" 				<< std::endl;
			std::cout << "*         Array Total Sum         *" 				<< std::endl;
			std::cout << "***********************************" 				<< std::endl;
			std::cout << "Welcome to the array summarizer!"					<< std::endl;
			std::cout << "In here we can take an array of numbers" 			<< std::endl;
			std::cout << "and return the sum of those values.\n"			<< std::endl;

			std::cout << "How many items would you like in your array?" 	<< std::endl;

			int sumArraySize = getInt();
			int userArray[sumArraySize];

			for (int i = 0; i < sumArraySize; i++) {
				std::cout << "Value " << i+1 << ": ";
				userArray[i] = getInt();
			}

			std::cout << "The results are in:" << std::endl;
			std::cout << "----------------------------" << std::endl;
			std::cout << "Sum: " << arrTotalSum(userArray, sumArraySize - 1) << "\n" 	<< std::endl;

		}
		else if (mainResponse == 3) {
			// Run the Triangular Number Calculator"
			std::cout << "***********************************" 			<< std::endl;
			std::cout << "*  Triangular Number Calculator   *" 			<< std::endl;
			std::cout << "***********************************" 			<< std::endl;
			std::cout << "Welcome to the Triangular Number Calculator." << std::endl;
			std::cout << "In this application you will input the number"<< std::endl;
			std::cout << "of rows you'd like, and we will return the"	<< std::endl;
			std::cout << "total number of pins required.\n"				<< std::endl;

			std::cout << "How many rows would you like? ";

			int userRows = getInt();

			std::cout << "Pin total: "  << triangularNum(userRows) << "\n" << std::endl;

		}
		else if (mainResponse == 4) {
			std::cout << "Thank you and have a nice day!" << std::endl;
		}
		else {
			std::cout << "I do not comprehend this answer, please try again\n" << std::endl;
		}
	} while (mainResponse != 4);

	return 0;
}