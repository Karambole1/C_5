#include "Device.h"
#include <string>
#include <iostream>

Device::Device() {
	this->evaporator = new Evaporator();
	this->battery = new Battery();
	this->cotton_wool = new Cotton_wool();
	this->goo = new Goo();
	cout << "\nDevice was created with default params!\n";
}
Device::Device(Evaporator* evaporator, Battery* battery, Cotton_wool* cotton_wool, Goo* goo) {
	this->evaporator = evaporator;
	this->battery = battery;
	this->cotton_wool = cotton_wool;
	this->goo = goo;
	cout << "\nDevice was created\n";
}
Device::~Device() {
	evaporator->~Evaporator();
	battery->~Battery();
	cotton_wool->~Cotton_wool();
	goo->~Goo();
	cout << "\nDevice was removed";
}

void Device::set_Evaporator(Evaporator* evaporator) {
	cout << "\nCurrent Evaporator was changed to\n\n";
	evaporator->Evaporator_INFO();
	this->evaporator = evaporator;
}

void Device::set_Battery(Battery* battery) {
	cout << "\nCurrent Battery was changed to\n\n";
	battery->Battery_INFO();
	this->battery = battery;
}

void Device::set_Cotton_wool(Cotton_wool* cotton_wool) {
	cout << "\nCurrent Cotton wool was changed to\n\n";
	cotton_wool->Cotton_wool_INFO();
	this->cotton_wool = cotton_wool;
}

void Device::set_Goo(Goo* goo) {
	cout << "\nCurrent Goo wool was changed to\n\n";
	goo->Goo_INFO();
	this->goo = goo;
}

void Device::Info_Device() {
	cout << "Device's info:\n\n";
	cout << "Evaporator:\n";
	evaporator->Evaporator_INFO();
	cout << "\nBattery:\n";
	battery->Battery_INFO();
	cout << "\nCotton wool:\n";
	cotton_wool->Cotton_wool_INFO();
	cout << "\nGoo:\n";
	goo->Goo_INFO();
}