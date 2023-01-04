#include "Cotton_wool.h"
#include <string>
#include <iostream>

Cotton_wool::Cotton_wool() {
	name = "default name";
	heating_temperature = 50;
	fiber_density = 45;
	std::cout << "Cotton wool was created with default params!\n";
}

Cotton_wool::Cotton_wool(std::string name) {
	this->name = name;
	heating_temperature = 50;
	fiber_density = 45;
	std::cout << "Cotton wool was created\n";
}
Cotton_wool::Cotton_wool(std::string name, int heating_temperature, int fiber_density) {
	this->name = name;
	this->heating_temperature = heating_temperature;
	this->fiber_density = fiber_density;
	std::cout << "\nNew Cotton wool was created";
}
Cotton_wool::~Cotton_wool() {
	std::cout << "Cotton wool " << name << " was removed";
}

void Cotton_wool::Cotton_wool_INFO() {
	std::cout << "\tname: " << name << "\n\theating temperature: " << heating_temperature << "\n\tfiber density: " << fiber_density << "\n";
}

void Cotton_wool::set_name(std::string name) {
	this->name = name;
}
std::string Cotton_wool::get_name() {
	return name;
}

void Cotton_wool::set_heating_temperature(int heating_temperature) {
	this->heating_temperature = heating_temperature;
}
int Cotton_wool::get_heating_temperature() {
	return heating_temperature;
}

void Cotton_wool::set_fiber_density(int fiber_density) {
	this->fiber_density = fiber_density;
}
int Cotton_wool::get_fiber_density() {
	return fiber_density;
}