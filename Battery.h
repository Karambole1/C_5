#pragma once
#include <string>
class Battery
{
private:
	std::string name;	// Название
	int capacity;		// Ёмкость
	int mAh;			// Милиамп. часы

public:
	Battery();
	Battery(std::string name);
	Battery(std::string name, int capacity, int mAh);
	~Battery();

	void Battery_INFO();

	void set_name(std::string name);
	std::string get_name();

	void set_capacity(int capacity);
	int get_capacity();

	void set_mAh(int mAh);
	int get_mAh();
};

