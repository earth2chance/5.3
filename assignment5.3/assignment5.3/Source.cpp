#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

int getRandomNumber()
{
	int randInteger = 0;
	randInteger = 1 + rand() % (100 - 1 + 1);
	return randInteger;
}

int main()
{
	int chances = 0;
	int userNumber;
	int die = getRandomNumber();
	bool guess = false;

	do{
		chances++;
		std::cout << "Try and guess the computer's number: ";
		std::cin >> userNumber;
		
		if (userNumber > die)
			std::cout << "You number is too high" << std::endl;
		else if (userNumber < die)
			std::cout << "Your number is too low" << std::endl;
		else if (userNumber == die){
			std::cout << "You're right!" << std::endl;
			guess = true;
		}
		
		std::cout << "You have used " << chances << " of 5 chances\n" << std::endl;
		
	} while (chances < 5 && guess != true);



}