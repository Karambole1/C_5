#include "Battery.h"
#include <string>
#include <iostream>

Battery::Battery() {
	name = "default name";
	capacity = 1200;
	mAh = 1200;
	std::cout << "Battery was created with default params!\n";
}

Battery::Battery(std::string name) {
	this->name = name;
	capacity = 1200;
	mAh = 1200;
	std::cout << "Battery was created\n";
}
Battery::Battery(std::string name, int capacity, int mAh) {
	this->name = name;
	this->capacity = capacity;
	this->mAh = mAh;
	std::cout << "\nNew Battery was created\n";
}
Battery::~Battery() {
	std::cout << "Battery " << name << " was removed";
}

void Battery::Battery_INFO() {
	std::cout << "\tname: " << name << "\n\tcapacity: " << capacity << "\n\tmAh: " << mAh << "\n";
}

void Battery::set_name(std::string name) {
	this->name = name;
}
std::string Battery::get_name() {
	return name;
}

void Battery::set_capacity(int capacity) {
	this->capacity = capacity;
}
int Battery::get_capacity() {
	return capacity;
}

void Battery::set_mAh(int mAh) {
	this->mAh = mAh;
}
int Battery::get_mAh() {
	return mAh;
}