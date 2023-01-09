#pragma once
#include <string>
class Cotton_wool
{
private:
	std::string name;			// Название
	int heating_temperature;	// Температура нагревания
	int fiber_density;			// Плотность волокон

public:
	Cotton_wool();
	Cotton_wool(std::string name);
	Cotton_wool(std::string name, int heating_temperature, int fiber_density);
	~Cotton_wool();

	void Cotton_wool_INFO();

	void set_name(std::string name);
	std::string get_name();

	void set_heating_temperature(int heating_temperature);
	int get_heating_temperature();

	void set_fiber_density(int fiber_density);
	int get_fiber_density();
};

