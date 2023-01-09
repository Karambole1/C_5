#pragma once
#include <string>
class Goo
{
private:
	std::string name;	// Название
	int strength;		// Крепость
	std::string taste;	// Вкус

public:
	Goo();
	Goo(std::string name);
	Goo(std::string name, int strength, std::string taste);
	~Goo();

	void Goo_INFO();

	void set_name(std::string name);
	std::string get_name();

	void set_strength(int strength);
	int get_strength();

	void set_taste(std::string taste);
	std::string get_taste();
};



