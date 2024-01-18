//#include <iostream>
//#include <fstream>
//#include <vector>
//#include<iomanip>
//#include<conio.h>
//#include<stdlib.h>
//#include<string>
//
//using namespace std;
//vector<string> departments{ "Surgery","Physician","ENT","Diabetes" };
//vector<vector<string>> patients_by_department;
//vector<vector<string>> doctors_by_department;
//
//class Admin {
//protected:
//	int id;
//	string firstname;
//	string lastname;
//	string cnic;
//	int age;
//	char gender;
//	float discount;
//private:
//	string username;
//	string password;
//	string type;
//	char type1;
//public:
//	
//	
//	Admin() {
//		username = "";
//		password = "";
//		firstname = "";
//		lastname = "";
//		cnic = "";
//		age = 0;
//		gender = '\0';
//	}
//	bool login() {
//		bool check = false;
//		bool flag = false;
//		int count = 0;
//		do {
//			system("cls");
//			cout << setfill('=') << setw(120) << "" << endl;
//			cout << setfill(' ') << setw(100) << "HOSPITAL MANAGEMENT SYSTEM" << endl;
//			cout << setfill('=') << setw(120) << "" << endl;
//			cout << "\n\n\n"<<setfill('=')<<setw(61)<<"LOGIN PAGE"<<setfill('=') << setw(60) << "\n";
//			cout << "\nWhat is your role ?";
//			cout << "\n1.Doctor";
//			cout << "\n2.Patient";
//			cout << "\n3.Accountant";
//			cout << "\n4.Parking Officer";
//			cout << "\n5.Admin\n";
//			type1 = _getche();
//			if (type1 >= '1' && type1 <= '5')
//			{
//				flag = true;
//			}
//			else
//			{
//				cout << "\nWrong Input!" << endl;
//			}
//		} while (!flag);
//
//		do {
//			system("cls");
//			cout << setfill('=') << setw(120) << "" << endl;
//			cout << setfill(' ') << setw(100) << "HOSPITAL MANAGEMENT SYSTEM" << endl;
//			cout << setfill('=') << setw(120) << "" << endl;
//			cout << "\n\n\n" << setfill('=') << setw(61) << "LOGIN PAGE" << setfill('=') << setw(60) << "\n";
//			cout << "\nEnter your username without space:      ";
//			cin >> username;
//
//			cout << "Enter your password without space:      ";
//			cin >> password;
//			ifstream file("validation.txt", ios::in|ios::beg);
//			if (!file)
//			{
//				cout << "Error opening file...";
//			}
//			else
//			{
//				bool check1 = false;
//				do {
//					
//					while (!file.eof())
//					{
//						string username1, password1;
//						file >> username1;
//						if (username1 == username)
//						{
//							file >> password1;
//							if (username1 == username && password1 == password)
//							{
//								file.close();
//								check = true;
//								check1 = true;
//								return check;
//							}
//						}
//					}
//					if (check1==false)
//					{
//						cout << "\nWrong credentials try again! ";
//						cout << "\nEnter your username without space:      ";
//						cin >> username;
//						cout << "Enter your password without space:      ";
//						cin >> password;
//						count++;
//					}
//				} while (!check1&& count<4);
//				if (count == 4)
//				{
//					cout << "You have tried to login with 5 incorrect attempts...Try again Later...";
//					file.close();
//					return check;
//
//				}
//				
//			}
//		} while (true);
//		
//
//	}
//	bool registeration()
//	{
//		string str;
//		bool flag = false;
//		do {
//			system("cls");
//			cout << setfill('=') << setw(120) << "" << endl;
//			cout << setfill(' ') << setw(100) << "HOSPITAL MANAGEMENT SYSTEM" << endl;
//			cout << setfill('=') << setw(120) << "" << endl;
//			cout << "\n\n\n" << setfill('=') << setw(60) << "REGISTRATION PAGE" << setfill('=') << setw(60) << "\n";
//			cout << "\nWhat is your role ?";
//			cout << "\n1.Doctor";
//			cout << "\n2.Patient";
//			cout << "\n3.Accountant";
//			cout << "\n4.Parking Officer";
//			cout << "\n5.Admin\n";
//			type1 = _getche();
//			if (type1 >= '1' && type1 <= '5')
//			{
//				flag = true;
//			}
//			else
//			{
//				cout << "\nWrong Input!" << endl;
//			}
//		} while (!flag);
//		system("cls");
//		cout << setfill('=') << setw(120) << "" << endl;
//		cout << setfill(' ') << setw(100) << "HOSPITAL MANAGEMENT SYSTEM" << endl;
//		cout << setfill('=') << setw(120) << "" << endl;
//		cout << "\n\n\n" << setfill('=') << setw(60) << "REGISTRATION PAGE" << setfill('=') << setw(60) << "\n";
//		cout << "Create username without spaces:  ";
//		cin >> username;
//		cout << "Create password without spaces:  ";
//		cin >> password;
//		fstream file("validation.txt", ios::in |ios::out | ios::app);
//		if (!file)
//		{
//			cout << "Error opening file...";
//			return flag=false;
//		}
//		else
//		{
//			file << "\n" << username << "\t" << password;
//			file.close();
//			return flag = true;
//		}
//		
//	}
//	void addNewDept()
//	{
//		ofstream file("Departments.txt", ios::app);
//		if (!file)
//		{
//			cout << "Cannot open file!" << endl;
//		}
//		else
//		{
//			string department;
//			string str;
//			vector<string> doctors;
//			cout << "Write the name of department you want to add: ";
//			getline(cin, department);
//			departments.push_back(department);
//			file << department;
//			cout << "Department added!";
//			cout << "Now add doctors and write zero to end:";
//			do {
//				getline(cin, str);
//				if (str != "0")
//				{
//					doctors.push_back(str);
//				}
//			} while (str != "0");
//			for (int i = 0; i < doctors.size(); i++)
//			{
//				file << doctors[i]<<endl;
//			}
//			file << endl;
//		}
//		file.close();
//
//	}
//	void showDoctors()
//	{
//		string line;
//		
//		ifstream file("Departments.txt");
//		if(!file)
//		{
//			cout << "Cannot open file." << endl;
//		}
//		else {
//			while (getline(file, line)) {
//				
//				for (int i = 0; i < departments.size(); i++)
//				{
//					
//					if (line == departments[i])
//					{
//						vector<string> doctors;
//						while (getline(file, line))
//						{
//							if (line[0] == 'D')
//							{
//								doctors.push_back(line);
//							}
//							else
//							{
//								break;
//							}
//						}
//						doctors_by_department.push_back(doctors);
//					}
//					
//				}
//				
//			}
//			file.close();
//		
//			for (int i = 0; i < departments.size(); i++) {
//				cout << "\nDepartment: " << departments[i] << endl;
//				cout << "\nDoctors: ";
//				for (int j = 0; j < doctors_by_department[i].size(); j++) {
//					cout << doctors_by_department[i][j] << endl;
//				}
//				cout << endl;
//			}
//		}
//	}
//	void showPatients()
//	{
//		ifstream file("Patients.txt");
//		string line;
//
//		if (!file)
//		{
//			cout << "Cannot open file." << endl;
//		}
//		else
//		{
//			while (getline(file, line))
//			{
//				for (int i = 0; i < departments.size(); i++)
//				{
//					if (line == departments[i])
//					{
//						vector<string> patients;
//						do
//						{
//							getline(file, line);
//							if ((i == departments.size() - 1) || (i < departments.size() - 1 && line == departments[i + 1]))
//							{
//								break;
//							}
//							patients.push_back(line);
//						} while (true);
//
//						patients_by_department.push_back(patients);
//					}
//				}
//			}
//			file.close();
//
//			// Initialize patients_by_department with the correct size
//			patients_by_department.resize(departments.size());
//
//			for (int i = 0; i < departments.size(); i++)
//			{
//				cout << "\nDepartment: " << departments[i] << endl;
//				cout << "\nPatients: ";
//				for (int j = 0; j < patients_by_department[i].size(); j++)
//				{
//					cout << patients_by_department[i][j] << endl;
//				}
//				cout << endl;
//			}
//		}
//	}
//
//	
//	void showFacilities()
//	{
//
//		cout << "\nFollowing are the departments offered by the Hospital: \n";
//		for (int i = 0; i < departments.size(); i++)
//		{
//			cout << i + 1 << "." << departments[i] << endl;
//		}
//	}
//	void addDoctor()
//	{
//		string doctor_name;
//		vector<string> Appointments;
//		cout << "Enter the name of doctor: " << endl;
//		getline(cin, doctor_name);
//		cout << "Enter the Free slots with time and place: ";
//		for (int i = 0; true; i++)
//		{
//			cout << "Enter appointment " << i + 1 << " else 0 to end : ";
//			getline(cin, Appointments[i]);
//			if (Appointments[i] == "0")
//			{
//				Appointments.pop_back();
//				break;
//			}
//		}
//		ofstream file("Appointments.txt", ios::app);
//		if (!file)
//		{
//			cout << "Error opening in file!";
//		}
//		else
//		{
//			file << doctor_name;
//			for (int i = 0; i < Appointments.size(); i++)
//			{
//				file << Appointments[i];
//			}
//			file.close();
//		}
//	}
//};
//class Doctor:public Admin {
//protected:
//	
//public:
//	static float pay;
//	float fee = 2000;
//	static int appointNo;
//	
//	void salary_calculate()
//	{
//		bool salary_calculated = false;
//
//		if (appointNo <= 20)
//		{
//			pay += appointNo * fee;
//			salary_calculated = true;
//		}
//		if (salary_calculated)
//		{
//
//			cout << "Income of Doctor per day = " << pay << endl;
//
//			salary_calculated = false;
//		}
//		else
//		{
//
//			cout << "\nNone of the patient have appointed Doctors today\n\n";
//		}
//	}
//	
//};
//int Doctor::appointNo = 0;
//float Doctor::pay = 0;
//class Patient:public Admin {
//	string app_time_and_place;
//	string departmentName;
//	char blood[3];
//public:
//	float dues;
//	void GetInfo()
//	{
//		int flag = 0;
//		
//		cout << "\n   Please enter data for patient\n";
//		cout << "\n   First name     : ";
//		getline(cin, firstname);
//		cout << "   Last name      : ";
//		getline(cin, lastname);
//	again:
//		cout << "   Blood Group    : ";
//		cin >> blood;
//		if ((strcmp(blood, "A+") == 0) || (strcmp(blood, "a+") == 0) || (strcmp(blood, "A-") == 0) || (strcmp(blood, "a-") == 0) ||
//			(strcmp(blood, "B+") == 0) || (strcmp(blood, "b+") == 0) || (strcmp(blood, "B-") == 0) || (strcmp(blood, "b-") == 0) ||
//			(strcmp(blood, "O+") == 0) || (strcmp(blood, "o+") == 0) || (strcmp(blood, "O-") == 0) || (strcmp(blood, "o-") == 0) ||
//			(strcmp(blood, "AB+") == 0) || (strcmp(blood, "ab+") == 0) || (strcmp(blood, "AB-") == 0) || (strcmp(blood, "ab-") == 0))
//			flag = 1;
//		if (flag == 0)
//		{
//			cout << "\n   Invalid Blood Group Try Again..\n\n";
//			goto again;
//		}
//		cout << "   Gender(m/f)    : ";
//		cin >> gender;
//		cout << "   Age            : ";
//		cin >> age;
//		
//	}
//
//	void bookAppointment(Doctor& d)
//	{
//		if (d.appointNo <= 20)
//		{
//			vector<string>appointment_time_and_place;
//			char alpha = '1';
//			char ch, ch2, ch3;
//
//			vector <string> doctors;
//			cout << "Select any department: " << endl;
//			for (int i = 0; i < departments.size(); i++)
//			{
//				cout << alpha << ". " << departments[i] << endl;
//				alpha++;
//			}
//			ch = _getche();
//			int f = ch - '0';
//			departmentName = departments[f - 1];
//			cout << endl;
//			cout << "Select any doctor : " << endl;
//			ifstream file("Departments.txt");
//			if (!file)
//			{
//				cout << "Error opening in file!";
//			}
//			else
//			{
//				while (!file.eof())
//				{
//					string line;
//					getline(file, line);
//					if (line == departments[f - 1])
//					{
//						cout << departments[f - 1];
//						for (int j = 0; true; j++)
//						{
//							getline(file, doctors[j]);
//							string doctor = doctors[j];
//							int count = 1;
//							if (doctor[0] != 'D')
//							{
//								doctors.pop_back();
//								break;
//							}
//							else
//							{
//								cout << count << ". " << doctors[j] << endl;
//								count++;
//							}
//						}
//					}
//				}
//				file.close();
//			}
//			ch2 = _getche();
//			int c = ch2 - '0';
//			cout << endl;
//			cout << "Select any Appointment : " << endl;
//			ifstream file1("Appointments.txt");
//			if (!file1)
//			{
//				cout << "Error opening in file." << endl;
//			}
//			else
//			{
//				while (!file1.eof())
//				{
//					string line;
//					getline(file1, line);
//					if (line == doctors[c - 1])
//					{
//						for (int j = 0; true; j++)
//						{
//							getline(file1, appointment_time_and_place[j]);
//							string app = appointment_time_and_place[j];
//							int count = 1;
//							if (app[0] == 'D')
//							{
//								appointment_time_and_place.pop_back();
//								break;
//							}
//							else
//							{
//								cout << count << ". " << appointment_time_and_place[j];
//								count++;
//							}
//						}
//					}
//				}
//				file1.close();
//			}
//			ch3 = _getche();
//			int b = ch3 - '0';
//			app_time_and_place = appointment_time_and_place[b - 1];
//			dues += d.fee;
//			d.appointNo++;
//			d.pay += d.fee;
//		}
//		else
//		{
//			cout << "The today's appointments of Doctor are booked." << endl;
//		} 
//	}
//	 friend ostream& operator<<(ostream& COUT,const Patient p)
//	{
//
//		COUT << "\n   Patient data:\n";
//		COUT << "\n   First Name         : " << p.firstname;
//		COUT << "\n   Last Name          : " << p.lastname;
//		COUT << "\n   Gender             : " << p.gender;
//		COUT << "\n   Age                : " << p.age;
//		COUT << "\n   Blood Group        : " << p.blood;
//		COUT << "\n   Department         : " << p.departmentName;
//		COUT << "\n   Appointment Time and Place   : " << p.app_time_and_place;
//		fstream file("Patient.txt", ios::in| ios::out| ios::app);
//		if (!file)
//		{
//			cout << "Error opening in file..." << endl;
//		}
//		else
//		{
//			while (!file.eof())
//			{
//				string line;
//				getline(file, line);
//				if (line == p.departmentName)
//				{
//					file.seekg(file.tellp());
//					file << p.firstname << " " << p.lastname << "\t";
//					file << p.gender << "\t" << p.age << "\t" << p.blood << "\t" << p.app_time_and_place << endl;
//				}
//			}
//			file.close();
//		}
//		return COUT;
//	}
//	void showDues()
//	{
//		cout << "Your dues for the Appointment are: " << dues << endl;
//	}
//	void checkout()
//	{
//		ifstream file("Patients.txt", ios::in);
//		ofstream tempFile("temp.txt");
//		bool found = false;
//		string line;
//		if(!file)
//		{
//			cout << "Error opening in file!" << endl;
//		}
//		else
//		{
//			while (file.eof())
//			{
//				getline(file, line);
//				if (line.find(firstname) == string::npos) {
//					tempFile << line << endl;
//				}
//				else {
//					found = true;
//				}
//				
//			}
//			file.close();
//			tempFile.close();
//			remove("Patients.txt");
//			rename("temp.txt", "Patients.txt");
//			if (found) {
//				cout << "Record for " <<firstname<<" "<<lastname << " deleted successfully." << endl;
//			}
//			else {
//				cout << "Record for " << firstname << " " << lastname << " not found." << endl;
//			}
//		}
//		
//
//	}
//};
//
//class Accountant:public Patient {
//	float bill;
//
//public:
//	void generateSlip()
//	{
//		cout << "Your dues are: " << dues << endl;;
//	}
//	void updateBill()
//	{
//		float disc = (dues * checkForDiscount()) / 100.0;
//		dues -= disc;
//	}
//	float checkForDiscount()
//	{
//		return 5;
//	}
//};
//
//
//class Car {
//private:
//	int car_no;
//	string cnic;
//	int start_hour, start_minute;
//	int end_hour, end_minute;
//	int hours, minutes;
//	string car_name;
//	float fee = 0.0;
//
//public:
//	Car(int car_no=0, string cnic=NULL, string car_name=NULL, int start_hour=0, int start_minute=0, int end_hour=0, int end_minute=0) {
//		this->car_no = car_no;
//		this->cnic = cnic;
//		this->car_name = car_name;
//		this->start_hour = start_hour;
//		this->start_minute = start_minute;
//		this->end_hour = end_hour;
//		this->start_minute = start_minute;
//		
//	}
//
//	int get_car_no() {
//		return car_no;
//	}
//	string get_cnic() {
//		return cnic;
//	}
//	string get_car_name() {
//		return car_name;
//	}
//	int get_start_minutes() {
//		return start_minute;
//	}
//	int get_start_hours() {
//		return start_hour;
//	}
//	int get_end_minutes() {
//		return end_minute;
//	}
//	int get_end_hours() {
//		return end_hour;
//	}
//	void set_car_no(int car_no) {
//		this->car_no = car_no;
//	}
//	void set_cnic(string cnic) {
//		this->cnic = cnic;
//	}
//	void set_car_name(string car_name) {
//		this->car_name = car_name;
//	}
//	void set_start_minutes(int start_minute) {
//		this->start_minute = start_minute;
//	}
//	void set_start_hours(int start_hour) {
//		this->start_hour = start_hour;
//	}
//	void set_end_minutes(int end_minute) {
//		this->end_minute=end_minute;
//	}
//	void set_end_hours(int end_hour) {
//		this->end_hour = end_hour;
//	}
//	void set_fee(float fee)
//	{
//		this->fee = fee;
//	}
//
//
//	float calculate_fee() {
//		
//		int hours, minutes;
//		hours = end_hour - start_hour;
//		minutes = end_minute - start_minute;
//
//		if (minutes < 0) {
//			minutes += 60;
//			hours--;
//		}
//
//		if (car_name == "Car") {
//			fee = hours * 10.0;
//		}
//		else if (car_name == "Bike") {
//			fee = hours * 5.0;
//		}
//		else if (car_name == "Heavy Vehicle") {
//			fee = hours * 15.0;
//		}
//
//		return fee;
//	}
//};
//
//void save_car_data(vector<Car>& cars) {
//	ofstream file("car_data.txt");
//
//	if (file.is_open()) {
//		for (int i = 0; i < cars.size(); i++) {
//			file << cars[i].get_car_no() << "," << cars[i].get_cnic() << "," << cars[i].get_car_name() << ","
//				<< cars[i].get_start_hours() << "," << cars[i].get_start_minutes() << "," << cars[i].get_end_hours() << "," << cars[i].get_end_minutes() <<","<< cars[i].calculate_fee() << endl;
//		}
//		file.close();
//	}
//}
//
//void read_car_data(vector<Car>& cars) {
//	ifstream infile("car_data.txt");
//	string line;
//
//	if (infile.is_open()) {
//		while (getline(infile, line)) {
//			int car_no;
//			string cnic, car_name;
//			int start_hour, end_hour;
//			int start_minute, end_minute;
//			size_t pos = 0;
//			string field;
//			int field_num = 0;
//			Car c;
//			while ((pos = line.find(',')) != string::npos) {
//				field = line.substr(0, pos);
//				line.erase(0, pos + 1);
//
//				switch (field_num) {
//				case 0:
//					c.set_car_no(stoi(field));
//					break;
//				case 1:
//					c.set_cnic(field);
//					break;
//				case 2:
//					c.set_car_name(field);
//					break;
//				case 3:
//					c.set_start_hours(stoi(field));
//					break;
//				case 4:
//					c.set_start_minutes(stoi(field));
//					break;
//				case 5:
//					c.set_end_hours(stoi(field));
//					break;
//				case 6:
//					c.set_end_minutes(stoi(field));
//					break;
//				case 7:
//					c.set_fee(stoi(field));
//					break;
//				}
//
//				field_num++;
//			}
//			cars.push_back(c);
//		}
//		infile.close();
//	}
//}
//
//void print_cars(vector<Car>& cars) {
//	for (int i = 0; i < cars.size(); i++) {
//		cout << "Car No: " << cars[i].get_car_no() << ", CNIC: " << cars[i].get_cnic() << ", Car Name: " << cars[i].get_car_name()
//			<< ", Start Time: " << cars[i].get_start_hours()<<":"<< cars[i].get_start_minutes()<< ", End Time: " <<  cars[i].get_end_hours() << ":" << cars[i].get_end_minutes() <<cars[i].calculate_fee()<< endl;
//	}
//}
//
//void add_car(vector<Car>& cars) {
//	int car_no;
//	string cnic, car_name;
//	int start_hour, start_minute;
//	int end_hour, end_minute;
//	cout << "Enter Car No: ";
//	cin >> car_no;
//
//	cout << "Enter CNIC: ";
//	cin >> cnic;
//
//	cout << "Enter Car Name (Car/Bike/Heavy Vehicle): ";
//	cin >> car_name;
//
//	cout << "Enter start time (hour minute): ";
//	cin >> start_hour >> start_minute;
//
//	cout << "Enter end time (hour minute): ";
//	cin >> end_hour >> end_minute;
//
//	cars.push_back(Car(car_no, cnic, car_name, start_hour, start_minute, end_hour, end_minute));
//
//	cout << "Car added successfully." << endl;
//}
//
//void remove_car(vector<Car>& cars) {
//	int car_no;
//
//	cout << "Enter Car No to remove: ";
//	cin >> car_no;
//
//	for (int i = 0; i < cars.size(); i++) {
//		if (cars[i].get_car_no() == car_no) {
//			float fee = cars[i].calculate_fee();
//
//			cout << "Car No: " << cars[i].get_car_no() << ", CNIC: " << cars[i].get_cnic() << ", Car Name: " << cars[i].get_car_name()
//				<< ", Start Time: " << cars[i].get_start_hours() << ":" << cars[i].get_start_minutes() << ", End Time: " << cars[i].get_end_hours() << ":" << cars[i].get_end_minutes() << cars[i].calculate_fee() << endl;
//
//			cars.erase(cars.begin() + i);
//			save_car_data(cars);
//
//			cout << "Car removed successfully." << endl;
//
//			return;
//		}
//	}
//
//	cout << "Car not found." << endl;
//}
//
//
//int main()
//{
//	Admin a;
//	vector<Car> cars;
//	Doctor doctor[5];
//	Patient patient[5];
//	char choice;
//	bool check;
//	char type1;
//	static int i =0,j=0;
//	do
//	{
//		
//		system("cls");
//		cout << setfill('=') << setw(120) << "" << endl;
//		cout << setfill(' ') << setw(100) << "HOSPITAL MANAGEMENT SYSTEM" << endl;
//		cout << setfill('=') << setw(120) << "" << endl;
//		cout << "\n\n\n" << setfill('=') << setw(60) << "LOGIN/REGISTER PAGE" << setfill('=') << setw(60) << "\n";
//		cout << "\nChoose one option:\n1. SignIn/LogIn(press 1 to select this)\n2. SignUp/Register(press 2 to select this)\n\npress any key or enter to exit\n";
//		cin >> choice;
//		if (choice == '1')
//		{
//			check=a.login();
//			system("pause");
//			cout << endl;
//		}
//		else if (choice == '2')
//		{
//			check = a.registeration();
//			system("pause");
//		}
//		else
//		{
//			exit(1);
//		}
//	} while (!check);
//	cout << "\nProceeding to the system....!" << endl;
//	system("pause");
//	do {
//		system("cls");
//		cout << setfill('=') << setw(120) << "" << endl;
//		cout << setfill(' ') << setw(100) << "HOSPITAL MANAGEMENT SYSTEM" << endl;
//		cout << setfill('=') << setw(120) << "" << endl;
//		cout << "\n\n\n" << setfill('=') << setw(60) << "MAIN MENU" << setfill('=') << setw(60) << "\n";
//		cout << "\n\nWhat is your role ?";
//		cout << "\n1.Doctor";
//		cout << "\n2.Patient";
//		cout << "\n3.Accountant";
//		cout << "\n4.Parking Officer";
//		cout << "\n5.Admin";
//		cout << "\n6.Exit\n";
//		type1 = _getche();
//		if (type1 == '1') {
//
//					system("cls");
//					char doctor_choice;
//					cout << setfill('=') << setw(120) << "" << endl;
//					cout << setfill(' ') << setw(100) << "HOSPITAL MANAGEMENT SYSTEM" << endl;
//					cout << setfill('=') << setw(120) << "" << endl;
//					cout << "\n\n\n" << setfill('=') << setw(60) << "DOCTOR DASHBOARD" << setfill('=') << setw(60) << "\n";
//					do {
//						cout << "\n1.SHOW DOCTORS";
//						cout << "\n2.SHOW PATIENTS";
//						cout << "\n3.PAY SHOW";
//						cout << "\n4.EXIT";
//						doctor_choice = _getche();
//						if (doctor_choice == '1')
//							a.showDoctors();
//						else if (doctor_choice == '2')
//							a.showPatients();
//						else if (doctor_choice == '3')
//							doctor[i].salary_calculate();
//					} while (doctor_choice != '4');
//						i++;
//		}
//		else if (type1 == '2')
//		{
//			char patient_choice;
//			system("cls");
//			cout << setfill('=') << setw(120) << "" << endl;
//			cout << setfill(' ') << setw(100) << "HOSPITAL MANAGEMENT SYSTEM" << endl;
//			cout << setfill('=') << setw(120) << "" << endl;
//			cout << "\n\n\n" << setfill('=') << setw(60) << "PATIENT DASHBOARD" << setfill('=') << setw(60) << "\n";
//			do {
//				cout << "\n1.SHOW DOCTORS";
//				cout << "\n2.SHOW INFO";
//				cout << "\n3.SHOW PATIENTS";
//				cout << "\n4.SHOW FACILITIES";
//				cout << "\n5.BOOK APPOINTMENT";
//				cout << "\n6.CHECKOUT";
//				cout << "\n7.SHOW DUES";
//				cout << "\n8.EXIT";
//				patient_choice = _getche();
//				if (patient_choice == '1')
//				{
//					a.showDoctors();
//				}
//				else if (patient_choice == '2')
//				{
//					cout << patient[j];
//				}
//				else if (patient_choice == '3')
//				{
//					a.showPatients();
//				}
//				else if (patient_choice == '4')
//				{
//					a.showFacilities();
//				}
//				else if (patient_choice == '5')
//				{
//					patient[j].bookAppointment(doctor[i]);
//				}
//				else if (patient_choice == '6')
//				{
//					patient[j].checkout();
//				}
//				else if (patient_choice == '7')
//				{
//					patient[i].showDues();
//				}
//			} while (patient_choice != '8');
//			j++;
//		}
//		else if (type1 == '3')
//		{
//			system("cls");
//			int accountant_choice;
//			cout << setfill('=') << setw(120) << "" << endl;
//			cout << setfill(' ') << setw(100) << "HOSPITAL MANAGEMENT SYSTEM" << endl;
//			cout << setfill('=') << setw(120) << "" << endl;
//			cout << "\n\n\n" << setfill('=') << setw(60) << "ACCOUNTANT DASHBOARD" << setfill('=') << setw(60) << "\n";
//			do {
//				cout << "\n1 To Show Salary of Doctors for one day\n2 To Show Patients Bill\n3.Exit \n\n";
//				cout << "Enter Your Choice Here:~ ";
//				cin >> accountant_choice;
//
//				if (accountant_choice == 1)
//				{
//					doctor[i].salary_calculate();
//				}
//				else if (accountant_choice == 2)
//				{
//					patient[j].showDues();
//				}
//			} while (accountant_choice != 3);
//			
//		}
//		else if (type1 == '4')
//		{
//			system("cls");
//			cout << setfill('=') << setw(120) << "" << endl;
//			cout << setfill(' ') << setw(100) << "HOSPITAL MANAGEMENT SYSTEM" << endl;
//			cout << setfill('=') << setw(120) << "" << endl;
//			cout << "\n\n\n" << setfill('=') << setw(60) << "PARKING OFFICER DASHBOARD" << setfill('=') << setw(60) << "\n";
//
//			read_car_data(cars);
//
//			int choice;
//
//			do {
//				cout << "1. PRINT ALL CARS" << endl;
//				cout << "2. ADD A CAR" << endl;
//				cout << "3. REMOVE A CAR" << endl;
//				cout << "4. EXIT" << endl;
//
//				cout << "Enter your choice: ";
//				cin >> choice;
//
//				switch (choice) {
//				case 1:
//					print_cars(cars);
//					break;
//				case 2:
//					add_car(cars);
//					break;
//				case 3:
//					remove_car(cars);
//					break;
//				case 4:
//					save_car_data(cars);
//					break;
//				default:
//					cout << "Invalid choice." << endl;
//				}
//			} while (choice != 4);
//
//		}
//		else if (type1 == '5')
//		{
//			char admin_choice;
//			do {
//				
//				system("cls");
//				cout << setfill('=') << setw(120) << "" << endl;
//				cout << setfill(' ') << setw(100) << "HOSPITAL MANAGEMENT SYSTEM" << endl;
//				cout << setfill('=') << setw(120) << "" << endl;
//				cout << "\n\n\n" << setfill('=') << setw(60) << "ADMIN DASHBOARD" << setfill('=') << setw(60) << "\n";
//				cout << "\n1.ADD NEW DEPARTMENT";
//				cout << "\n2.SHOW DOCTORS";
//				cout << "\n3.SHOW PATIENTS";
//				cout << "\n4.ADD NEW DEPARTMENT";
//				cout << "\n5.SHOW FACILITIES";
//				cout << "\n6.EXIT\n\n";
//				admin_choice = _getche();
//				if (admin_choice == '1')
//				{
//					a.addNewDept();
//				}
//				else if (admin_choice == '2')
//				{
//					a.showDoctors();
//				}
//				else if (admin_choice == '3')
//				{
//					a.showPatients();
//				}
//				else if (admin_choice == '4')
//				{
//					a.addNewDept();
//				}
//				else if (admin_choice == '5')
//				{
//					a.showFacilities();
//				}
//				
//			} while (admin_choice != '6');
//		}
//		else
//		{
//			exit(1);
//		}
//	}while (true);
//	system("pause>0");
//	return 0;
//}