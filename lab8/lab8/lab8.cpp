// lab8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int dayOfWeek(int month, int day, int year);
int countVowel(string str);
int countWords(string str);
bool isBodyPart(string currentBody, char c);

int main()
{
   //Part 1 
	string str;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "Q") { break; }
		else { cout << "Vowel count: " << countVowel(str) << endl; }
	}
	return 0;

   //Part 2
	string str;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "Q") { break; }
		else { cout << "Word count: " << countWords(str) << endl; }
	}
	return 0;

   //Part 3
	int month = 0;
	int day = 0;
	int year = 0;

	while (true) {

		cout << "Enter a date or Q to quit: ";
		cin >> month >> day >> year;

		if (cin.fail()) { break; }

		if (dayOfWeek(month, day, year) == 0) {
			cout << "Saturday, ";
		}
		else if (dayOfWeek(month, day, year) == 1) {
			cout << "Sunday, ";
		}
		else if (dayOfWeek(month, day, year) == 2) {
			cout << "Monday, "; 
		}
		else if (dayOfWeek(month, day, year) == 3) {
			cout << "Tuesday, ";
		}
		else if (dayOfWeek(month, day, year) == 4) {
			cout << "Wednesday, ";
		}
		else if (dayOfWeek(month, day, year) == 5) {
			cout << "Thursday, ";
		}
		else if (dayOfWeek(month, day, year) == 6) {
			cout << "Friday, ";
		}
		
		if (month == 1) {
			cout << "January " << day << ", " << year << endl;
		}
		else if (month == 2) {
			cout << "February " << day << ", " << year << endl;
		}
		else if (month == 3) {
			cout << "March " << day << ", " << year << endl;
		}
		else if (month == 4) {
			cout << "April " << day << ", " << year << endl;
		}
		else if (month == 5) {
			cout << "May " << day << ", " << year << endl;
		}
		else if (month == 6) {
			cout << "June " << day << ", " << year << endl;
		}
		else if (month == 7) {
			cout << "July " << day << ", " << year << endl;
		}
		else if (month == 8) {
			cout << "August " << day << ", " << year << endl;
		}
		else if (month == 9) {
			cout << "September " << day << ", " << year << endl;
		}
		else if (month == 10) {
			cout << "October " << day << ", " << year << endl;
		}
		else if (month == 11) {
			cout << "November " << day << ", " << year << endl;
		}
		else if (month == 12) {
			cout << "December " << day << ", " << year << endl;
		}

	}
}

bool isBodyPart(string currentBody, char c) {
	for (int i = 0; i < currentBody.length(); i++) {
		if (currentBody.at(i) == 'c') {
			return true;
		}
	}
	return false;
}

int countVowel(string str) {
	int i = 0;
	int count = 0;
	for (i >= 0; i < str.length(); i++) {
		if (str[i] == 'a'){
			count++;
		}
		else if (str[i] == 'A') {
			count++;
		}
		else if (str[i] == 'e') {
			count++;
		}
		else if (str[i] == 'E') {
			count++;
		}
		else if (str[i] == 'i') {
			count++;
		}
		else if (str[i] == 'I') {
			count++;
		}
		else if (str[i] == 'o') {
			count++;
		}
		else if (str[i] == 'O') {
			count++;
		}
		else if (str[i] == 'u') {
			count++;
		}
		else if (str[i] == 'U') {
			count++;
		}
	}
	return count;
}

int countWords(string str) {
	int i = 0;
	int count = 1;
	for (i >= 0; i < str.length(); i++) {
		if (str[i] == ' ' || str[i] == '  ') {
			count++;
		}
	}
	return count;
}

/**
dayOfWeek - Computes the weekday of a given date.
@param year - the month
@param month - the month (1 = January ... 12 = December)
@param day - the day of the month
@return the weekday (0 = Saturday ... 6 = Friday)
*/
int dayOfWeek(int month, int day, int year) {
	if (month == 1 || month == 2) {
		month = month + 12;
		year = year - 1;
	}
	int weekday = (day + (((month + 1) * 26) / 10) + year + (year / 4) + (6 * (year / 100)) + (year / 400)) % 7;
	return weekday;
}