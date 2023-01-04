#include "Evaporator.h"
#include <string>
#include <iostream>
using namespace std;

Evaporator::Evaporator() {
	name = "default name";
	diameter = 20;
	watts = 10;
	resistance = 5;
	//count++;
	//id = count;
	cout << "Evaporator was created with default params!\n";
}

Evaporator::Evaporator(string name) {
	this->name = name;
	diameter = 20;
	watts = 10;
	resistance = 5;
	//count++;
	//id = count;
	cout << "Evaporator was created\n";
}
Evaporator::Evaporator(string name, int diameter, int watts, int resistance) {
	this->name = name;
	this->diameter = diameter;
	this->watts = watts;
	this->resistance = resistance;
	//count++;
	//id = count;
	cout << "\nNew Evaporator was created";
}

Evaporator::~Evaporator() {
	//count--;
	cout << "\nEvaporator " << name << " was removed";
}

void Evaporator::Evaporator_INFO() {
	cout << "\nInfo\n\tname: " << name << "\n\tdiameter: " << diameter << "\n\twatts: " << watts << "\n\tresistance: " << resistance << "\n";
}

/*void Evaporator::Count_of_evaporators() {
	cout << "\nAmount of avalibale evaporators: " << count;
}

int Evaporator::getId(int& id) {
	id = this->id;
	return this->id;
}
int Evaporator::getId(int* id) {
	*id = this->id;
	return this->id;
}*/

void Evaporator::set_name(string name) {
	this->name = name;
}
string Evaporator::get_name() {
	return name;
}

void Evaporator::set_diameter(int diameter) {
	this->diameter = diameter;
}
int Evaporator::get_diameter() {
	return diameter;
}

void Evaporator::set_watts(int watts) {
	this->watts = watts;
}
int Evaporator::get_watts() {
	return watts;
}

void Evaporator::set_resistance(int resistance) {
	this->resistance = resistance;
}
int Evaporator::get_resistance() {
	return resistance;
}

/*string Evaporator::ParamsToString() {
	return "#" + to_string(id) + " " + name + ", " + to_string(diameter) + " mm, " + to_string(watts) + " watts, " + to_string(resistance) + " OM.";
}

Evaporator Evaporator::operator+(const Evaporator& evaporator) {
	Evaporator temp(this->name + "+" + evaporator.name, this->diameter + evaporator.diameter, this->watts + evaporator.watts, this->resistance + evaporator.resistance);
	return temp;
}
Evaporator& Evaporator::operator++ () {
	name = "(" + name + ")++";
	diameter += diameter;
	watts += watts;
	resistance += resistance;
	return *this;
}
Evaporator& Evaporator::operator++ (int) {
	Evaporator evaporator = *this;
	++* this;
	return evaporator;
}
Evaporator& Evaporator::operator=(Evaporator& evaporator) {
	diameter = evaporator.diameter;
	watts = evaporator.watts;
	resistance = evaporator.resistance;
	return *this;
}*/

super_Evaporator::super_Evaporator(int more_secret_part) {
	this->more_secret_part = more_secret_part;
	cout << "some changes?\n";
}

void super_Evaporator::set_secret_part() {
	more_secret_part = secret_part;
	cout << "smth changed in secret part...\n";
}

void super_Evaporator::Evaporator_INFO(int smht) {
	cout << "If u need it: " << more_secret_part << endl;
}

super_Evaporator& super_Evaporator::operator = (Evaporator& other) {
	this->name = other.get_name();
	this->diameter = other.get_diameter();
	this->watts = other.get_watts();
	this->resistance = other.get_resistance();
//	this->diameter = other.diameter;
	return *this;
}