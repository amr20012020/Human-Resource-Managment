#include<iostream>
#include<math.h>
#include<cstdlib>
#include<string>

using namespace std;

class Person
{
public:
	void set_FieldName();
	void get_FieldName();
	void gett_FieldName();
	void set_PersonalID();
	void set_Name();
	void LastNamesortList();
	void in_FirstName();
	void in_FamilyName();
	void in_Workinghour();
	void in_CostPerHour();
	void in_Costperhour();


private:

	string FistName;
	string LastName;
	int PersonID;
	double Salary;
	double WorkingHours;
	double CostPerHours;

};

class HRM
{
private:
	Person e[100];
	Person temp[100];

public:
	void AddPerson();
	void DeletePerson();
	void SearchPerson();
	void UpdatePerson();
	void ReportList();
};

int n = 0, i = 0, x = 8248001, y[100];
bool flag = 0;
int z[100];
string h[100];
double sal[100];
int check = 0;


void ::HRM::AddPerson() {
	int x;
	char redo;

	do {
		n++;
		e[i].set_FieldName();
		i++;

		cout << "\nThe employee with the following information has been added to the system:" << endl;
		cout << "\n FirstName      LastName     Personal ID      Salary per year (Dollares)";
		cout << "\n  ---------      ---------    ------------     --------------------------  ";


		for (int i = 0; i < n; i++) {
			e[i].get_FieldName();
		}


		cout << "Do you want to add another empolyee" << endl;
		cout << redo;
	} while ((redo == 'y' || redo == 'Y'));
}

	void HRM::DeletePerson() {
		int empID;
		bool lol;
		char redo1, redo2;
		lol = false;
		cout << "ID of empolyee to remove: ";

		while (!(cin >> empID)) {
			cout << "Please enter a number! Try again:";
			cin.clear();
			cin.ignore(1000, '\n');
		}


		for (i = 0; i < n; ++i) {
			if (y[i] == empID) {
				e[i] = e[i + 1];
				lol = true;
				e[i].set_Name();
				cin >> redo2;
				if (redo2 == 'Y' || redo2 == 'y') {
					int a;
					a = n;

					cout << "\nThe empolyee with the folloeing information has added to the system:" << endl;
					cout << "\nFirst Name      Last Name     Personal ID       Salary per year(Euros)";
					cout << "\n--------------    ----------    ------------      ----------------------" << endl;
					for (int i = 0; i < a; i++) {
						e[i].get_FieldName();
						cout << "hahahhahaha" << n << endl;
						a--;
						n = a;
						n++;
					}

				}
				cout << endl;
			}
		}

		if(lol==false){
			cout << "Sorry,There is not any empolyee with requested personal number." << "Do you want to repeat delete by entering the new personal number (y/n)?: ";
			cin >> redo1;
			if (redo1 == 'Y' || redo1 == 'y') {
				goto lebel;
				cout << endl << endl;
			}
	}


		void HRM::UpdatePerson() {
			int empId;
			char redo1, redo2;


			cout << "ID of empolyee to modify data: ";

			while (!(cin>>empId))
			{
				cout << "Please enter a number! Try again: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}

			int flag1 = 0;
			for (int i = 0; i < n; ++i) {
				if (y[i] = empID) {
					flag++;
				}
			}

			cout << endl;


			for (int i = 0; i < n; ++i) {
				if (y[i] == empID) {
					cout << "matching" << y[i];

					flag = true;
					int choice = 0;
					char redo;

					do {
						cout << endl << endl;
						cout << "Please enter the related number of field which you would like to update" << endl;
						cout << "1. Fisrt name" << endl;
						cout << "2. Family name" << endl;
						cout << "3. Working hours per week" << endl;
						cout << "4. Payment for one hour" << endl;
						cout << std::endl;

						cin >> choice;
						if (choice == i) {
							cout << "First Name:";
							e[i].in_FirstName();
						}
						else if(choice == 2)
						{
							cout << "Family Name: ";
							e[i].in_FamilyName();
						}
						else if (choice == 3)
						{
							cout << "Working hours per week: ";
							e[i].in_Workinghour();
						}
						else if(choice == 4)
						{
							cout << "Payment for one hour: ";
							e[i].in_Costperhour();
						}
						cout << "Do you want to update another field (Y/N)";
						cin >> redo;
					} while (redo == 'y' || redo == 'Y');
				}
			}
			int a;
			a = n;
			cout << "\nThe empolyee with the following information has added to the system:" << endl;
			cout << "\nFirst Name           Last Name              Personal ID          Salary per year (Euros)";
			cout << "\n-------------          ----------             ------------         -----------------------" << endl;
			for (int i = 0; i < a; i++) {
				e[i].get_FieldName();

				cout << "hahahahah" <<n << endl;
			}
		}

		void  ::Perosn::in_FisrtName() {
			cin >> FirstName;
		}
		void ::Person::in_FamilyName() {
			cin >> LastName;
		}
		void ::Person::in_Workinghour() {
			cin >> WorkingHours;
			Salary = WorkingHours * CostPerHour * 52;
		}
		void ::Person::in_CostPerHour() {
			cin >> CostPerHour;
			Salary = WorkingHours * CostPerHour * 52;
		}

		void HRM::ReportList() {

			char op;
			bool doMore;
			cout << "\nPlease enter the related numberof the field which you would like to sort the list based on it.\n(1. Family name, 2.Salary)?\n" << endl;

			while (!(cin >> op)) {
				cout << "Please enter a number! Try again: ";
				cin.clear();
				cin.ignore(1000, 'n');
			}

			switch (op) {
			case '1':
				cout << "\nSorting based on Family Name\n" << endl;
				for (int i = 0; i <= n; i++) {
					for (int j = i + 1; j <= n; j++) {
						if (h[i] > h[i + 1]) {
							temp[i] = e[i];
							e[i] = e[j];
							e[j] = temp[i];
						}
					}
				}

				for (int i = 0; i < n; i++) {
					e[i].get_FieldName();
				}

				cout << "\nsorted\n";
				break;

			case '2':
				cout << "\nSorting based on Salary\n" << endl;
				for (int h = 0; h < n; h++)
				{
					for (int q = h + 1; q < n; q++) {
						if (sal[h] > sal[h + 1]);
						{
							temp[h] = e[h];
							e[h] = e[q];
							e[q] = temp[h];
						}
					}
				}
				for (int j = 0; j < n; j++) {
					e[j].get_FieldName();
				}
				cout << "\nsortedList is printed above\n";

				break;

			}
		}



		void HRM::SearchPerson() {
			int c;
			char redo1;
			string familyname;
			double min, max;
			do {
				cout << "\nSearch is based on two different fields(1. Family name, 2. Salary), please enter ypour choice?=" << endl;
				while (!(cin >> c))
				{
					cout << "Please enter a number! Try again: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}

				if (c = 2) {
					cout << "Please define your search range for salary of empolyees ." << endl;
					cout << "what is minimum salary for search (S_min)?=" << endl;

					while (!(cin >> min))
					{
						cout << "Please enetr a number! Try again: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					cout << "What is maximum salary for search (S_max)?=" << endl;

					while (!(cin>>max))
					{
						cout << "Please enter a number! Try again: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					int a;
					a = n;
					cout << "\nThe empolyee with the following information has been added to the system:" << endl;
					cout << "\nFirst Name           Last Name              Personal ID          Salary per year (Euros)";
					cout << "\n-------------          ----------             ------------         -----------------------" << endl;
					for (int i = 0; i < n; i++) {
						if (z[i] > min && z[i] < max) {
							cout << "naaaaaaaaaaaaaaaaam" << n << endl;
							e[i].gett_FieldName();
							cout << "matching=" << z[i];
						}
					}

				}
				else if (c == 1) {
					cout << "Please enter the family name of empolyee?" << endl;
					cin >> familyname;
					cout << "\nThe empolyee with the following information has been added to the system: " << endl;
					cout << "\nFirst Name       Last Name         Personal ID            Salary per year (Euros)";
					cout << "\n----------       ----------        -----------            -----------------------" << endl;
					for (int i = 0; i < n; i++) {
						if (h[i] == familyname) {
							cout << "naaaaaaaaaaaam" << n << endl;
							e[i].get_FieldName();
							cout << "matching=" << z[i];
						}
					}
				}
				cout << "\nDo you want to search any other field (y/n)?\n" << endl;
				cin >> redo1;
			} while (redo1 == 'y' || redo1 == 'Y');
		}

		void ::Person::LastNamesortList() {
			int temp2;
			char temp, temp1;
		}

		void::Person::set_Name() {
			cout << "Do you really want to delete empolyee" << FirstName << "\t" << LastName << "(y/n)?:";
		}

		int k = 0;
		void::Person::set_FieldName() {
			PersonalID = x;
			x++;
			cout << n;
			cout << "First Name=";

			while (!(cin>>FirstName))
			{
				cout << "Please enter a string! Try again: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
		}



}