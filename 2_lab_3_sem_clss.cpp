#include <iostream>
#include <conio.h>
#include "Evaporator.h"
#include "Battery.h"
#include "Cotton_wool.h"
#include "Goo.h"
#include "Device.h"
using namespace std;


int main() {
	int choice, change_choice, list_choice = 0, plus_choice, number;
	string name, taste;
	int diameter, watts, resistance, capacity, mAh, heating_temperature, fiber_density, strength /*number*/;
	int battery_5_capacity;


	Evaporator* evaporators[5] = { 0, 0, 0, 0, 0 };
	Battery* batteries[5] = { 0, 0, 0, 0, 0 };
	Cotton_wool* cotton_wools[5] = { 0, 0, 0, 0, 0 };
	Goo* goos[5] = { 0, 0, 0, 0, 0 };

	super_Evaporator* s_Evaporetor = 0;

	evaporators[0] = new Evaporator();
	batteries[0] = new Battery();
	cotton_wools[0] = new Cotton_wool();
	goos[0] = new Goo();

	super_Evaporator* s_Evaporator = new super_Evaporator(700);

	evaporators[1] = new Evaporator("test_evaporator", 12, 12, 12);
	s_Evaporator->Evaporator_INFO();
	*s_Evaporator = *evaporators[1];
	s_Evaporator->Evaporator_INFO();
	s_Evaporator->Evaporator_INFO(1);


	Device* device = new Device(evaporators[0], batteries[0], cotton_wools[0], goos[0]);

	cout << "\nPress any key to continue...";
	_getch();
	system("cls");

	while (true) {
		cout << "Menu:\n\t1 to show Device's info.\n\t2 to change part of device.\n\t3 to exit.\nYour answer: ";
		cin >> choice;
		system("cls");

		if (choice == 1) {
			device->Info_Device();
			cout << "\nPress any key to continue...";
			_getch();
			system("cls");
		}

		else if (choice == 2) {
			cout << "Select part to change:\n\t1 Evaporator\n\t2 Battery\n\t3 Cotton wool\n\t4 Goo\n\t5 to menu\n";
			//Evaporator::Count_of_evaporators();
			cout << "\nYour answer: ";
			cin >> change_choice;
			system("cls");

			if (change_choice == 1) {

				cout << "Choose Evaporator in list:\n";
				for (int i = 0; i < 5; i++) {
					if (evaporators[i] != 0)
						cout << i + 1 << " " << evaporators[i]->get_name() << "\n";
					else cout << i + 1 << " create new...\n";

				}
				cout << "\n6 Remove added parts.\n";

				cout << "Your answer: ";
				cin >> list_choice;

				if (list_choice == 6) {
					for (int i = 1; i < 5; i++) {
						if (evaporators[i] == 0) continue;
						evaporators[i]->~Evaporator();
						evaporators[i] = 0;
					}
					device->set_Evaporator(evaporators[0]);
					cout << "\n\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				if (evaporators[list_choice - 1] == 0) {
					printf("\nCreate new:\n");

					cout << "Enter Evaporator's name: "; cin >> name;
					cout << "Enter Evaporator's diameter: "; cin >> diameter;
					cout << "Enter Evaporator's watts: "; cin >> watts;
					cout << "Enter Evaporator's resistance: "; cin >> resistance;

					evaporators[list_choice - 1] = new Evaporator(name, diameter, watts, resistance);
					device->set_Evaporator(evaporators[list_choice - 1]);
					cout << "\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				/*cout << "Would you change?:\n1 Watts\n2 Resistance\n3 I wouldn't\nYour answer: ";
				cin >> plus_choice;

				if (plus_choice == 1) {
					cout << "Enter a number to plus to watts: ";
					cin >> number;
					evaporators[list_choice - 1]->Watts_plus_number(&evaporators[list_choice - 1]->get_watts(), number);
				}*/

				device->set_Evaporator(evaporators[list_choice - 1]);
				cout << "\nPress any key to continue...";
				_getch();
				system("cls");
			}
			else if (change_choice == 2) {
				cout << "Choose Battery in list:\n";
				for (int i = 0; i < 5; i++) {
					if (batteries[i] != 0)
						cout << i + 1 << " " << batteries[i]->get_name() << "\n";
					else cout << i + 1 << " create new...\n";
				}

				try {
					if (batteries[4] != 0) {
						battery_5_capacity = batteries[4]->get_capacity();
						cout << "battery 5's capacity:\n" << battery_5_capacity;
					}
					else throw exception();
				}
				catch (const exception) {
					cout << "battery 5's capacity: Error";
				}
				cout << "\n6 Remove added parts.\n";

				cout << "Your answer: ";
				cin >> list_choice;

				if (list_choice == 6) {
					for (int i = 1; i < 5; i++) {
						if (batteries[i] == 0) continue;
						batteries[i]->~Battery();
						batteries[i] = 0;
					}
					device->set_Battery(batteries[0]);
					cout << "\n\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				if (batteries[list_choice - 1] == 0) {
					printf("\nCreate new:\n");

					cout << "Enter Battery's name: "; cin >> name;
					cout << "Enter Battery's capacity: "; cin >> capacity;
					cout << "Enter Battery's mAh: "; cin >> mAh;

					batteries[list_choice - 1] = new Battery(name, capacity, mAh);
					device->set_Battery(batteries[list_choice - 1]);
					cout << "\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}
				cout << endl;
				device->set_Battery(batteries[list_choice - 1]);
				cout << "\nPress any key to continue...";
				_getch();
				system("cls");
			}

			else if (change_choice == 3) {
				cout << "Choose Cotton wool in list:\n";
				for (int i = 0; i < 5; i++) {
					if (cotton_wools[i] != 0)
						cout << i + 1 << " " << cotton_wools[i]->get_name() << "\n";
					else cout << i + 1 << " create new...\n";

				}
				cout << "\n6 Remove added parts.\n";

				cout << "Your answer: ";
				cin >> list_choice;

				if (list_choice == 6) {
					for (int i = 1; i < 5; i++) {
						if (cotton_wools[i] == 0) continue;
						cotton_wools[i]->~Cotton_wool();
						cotton_wools[i] = 0;
					}
					device->set_Cotton_wool(cotton_wools[0]);
					cout << "\n\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				if (cotton_wools[list_choice - 1] == 0) {
					printf("\nCreate new:\n");

					cout << "Enter Cotton wool's name: "; cin >> name;
					cout << "Enter Cotton wool's heating temperature: "; cin >> heating_temperature;
					cout << "Enter Cotton wool's fiber density: "; cin >> fiber_density;

					cotton_wools[list_choice - 1] = new Cotton_wool(name, heating_temperature, fiber_density);
					device->set_Cotton_wool(cotton_wools[list_choice - 1]);
					cout << "\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}
				cout << endl;
				device->set_Cotton_wool(cotton_wools[list_choice - 1]);
				cout << "\nPress any key to continue...";
				_getch();
				system("cls");
			}

			else if (change_choice == 4) {
				cout << "Choose Goo in list:\n";
				for (int i = 0; i < 5; i++) {
					if (goos[i] != 0)
						cout << i + 1 << " " << goos[i]->get_name() << "\n";
					else cout << i + 1 << " create new...\n";

				}
				cout << "\n6 Remove added parts.\n";

				cout << "Your answer: ";
				cin >> list_choice;

				if (list_choice == 6) {
					for (int i = 1; i < 5; i++) {
						if (goos[i] == 0) continue;
						goos[i]->~Goo();
						goos[i] = 0;
					}
					device->set_Goo(goos[0]);
					cout << "\n\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				if (goos[list_choice - 1] == 0) {
					printf("\nCreate new:\n");

					cout << "Enter Goo's name: "; cin >> name;
					cout << "Enter Goo's strength: "; cin >> strength;
					cout << "Enter Goo's taste: "; cin >> taste;

					goos[list_choice - 1] = new Goo(name, strength, taste);
					device->set_Goo(goos[list_choice - 1]);
					cout << "\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}
				cout << endl;
				device->set_Goo(goos[list_choice - 1]);
				cout << "\nPress any key to continue...";
				_getch();
				system("cls");
			}

		}

		else if (choice == 3) {
			const int baterry_slots = 3, slots = 3;
			Battery* all_avalibale_baterryies[slots][baterry_slots];
			all_avalibale_baterryies[0][0] = new Battery("cool_battery", 12, 10);
			all_avalibale_baterryies[0][0]->Battery_INFO();
			all_avalibale_baterryies[0][0]->set_mAh(50);
			cout << "New params:\n";
			all_avalibale_baterryies[0][0]->Battery_INFO();
			break;
		}
		
		

	}
}

//int Evaporator::count = 0;