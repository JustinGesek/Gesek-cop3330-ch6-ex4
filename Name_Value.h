#ifndef NAME_VALUE_H
#define NAME_VALUE_H

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 first_name last_name
 */
 
 #include <string>
class Name_value {
public :
	Name_value(std::string const &_name, int _value):
		name(_name),
		value(_value)
	{}
	std::string const& getName() const { return name; }
	int getValue() const { return value; }
private:
	std::string name;
	int value;

};

#endif