#include "Goo.h"
#include <string>
#include <iostream>

Goo::Goo() {
	name = "default name";
	strength = 20;
	taste = "Brucko";
	std::cout << "Goo was created with default params!\n";
}

Goo::Goo(std::string name) {
	this->name = name;
	strength = 20;
	taste = "Brucko";
	std::cout << "Goo was created\n";
}
Goo::Goo(std::string name, int strength, std::string taste) {
	this->name = name;
	this->strength = strength;
	this->taste = taste;
	std::cout << "\nNew Goo was created";
}
Goo::~Goo() {
	std::cout << "Goo " << name << " was removed";
}

void Goo::Goo_INFO() {
	std::cout << "\tname: " << name << "\n\tstrength: " << strength << "\n\ttaste: " << taste << "\n";
}

void Goo::set_name(std::string name) {
	this->name = name;
}
std::string Goo::get_name() {
	return name;
}

void Goo::set_strength(int strength) {
	this->strength = strength;
}
int Goo::get_strength() {
	return strength;
}

void Goo::set_taste(std::string taste) {
	this->taste = taste;
}
std::string Goo::get_taste() {
	return taste;
}