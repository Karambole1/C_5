#pragma once
#include "Evaporator.h"
#include "Battery.h"
#include "Cotton_wool.h"
#include "Goo.h"

class Device{;
private:
	Evaporator* evaporator;
	Battery* battery;
	Cotton_wool* cotton_wool;
	Goo* goo;

public:
	Device();
	Device(Evaporator* evaporator, Battery* battery, Cotton_wool* wotton_wool, Goo* goo);
	~Device();

	void set_Evaporator(Evaporator* evaporator);
	void set_Battery(Battery* battery);
	void set_Cotton_wool(Cotton_wool* cotton_wool);
	void set_Goo(Goo* goo);

	void Info_Device();
};

