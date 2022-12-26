#include <type_traits>
#include <typeinfo>
#include <iostream>
#include <list>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>

int numberChoice(){
	
	int number;
	std::cout << "Choose a number between 1-20" << std::endl;
	std::cin >> number;
	

	
	if(number > 20 || number < 1){
		std::cout << "Number has to be between 1-20!" << std::endl; 
		return numberChoice();
	}
	return number;


}

void listAllNums(std::list<int> ls){

	std::cout << "Numbers are: ";
	for(std::list<int>::iterator i = ls.begin(); i != ls.end(); i++){
		std::cout << *i << ", ";
	}
	std::cout << std::endl;

}

void atIndex(std::map<int, int> ls){
	int chosen;
	std::cout << "Choose an index between 0-" << (ls.size() - 1) << std::endl; 
	std::cin >> chosen;
	std::cout << "At index " << chosen << ", the value is: "<< ls.at(chosen) << std::endl;


}

std::list<int> listOfNums;


int main(){

	
	std::map<int, int> lister;
	int count {0};
	for(std::list<int>::iterator i = listOfNums.begin(); i != listOfNums.end(); i++){
		
		lister.insert({count, *i});	
		count++;
	}


	int whatToDo;
	
	std::cout << "What to do?\n   1. Insert\n   2. List all numbers chosen\n   3. Get from Index\n   4. ... \n\n 100. Exit" << std::endl;

	std::cin >> whatToDo;

	switch(whatToDo){
		case 1:
			system("clear");
			listOfNums.push_back(numberChoice());
			main();
			break;
		case 2:
			system("clear");
			listAllNums(listOfNums);
			main();
			break;
		case 3:
			system("clear");
			atIndex(lister);
			main();
			break;
		case 100:
			std::cout << "Exiting..." << std::endl;
			break;
		default:

			break;

	}






	/*
	char ch = (char) 1 + 96;

	std::cout << ch << std::endl; // output: 'A' 
	*/
	
	std::cout << std::endl;

	return 0;
}
