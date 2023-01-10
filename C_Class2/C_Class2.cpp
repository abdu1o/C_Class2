#include <iostream>
#include <string>
#include <vector>
using namespace std;

class PhoneBook {

private:
	string full_name;
	char* info;
	string home_phone;
	string work_phone;
	string mobile_phone;

public:

	PhoneBook() = default;

	PhoneBook(string full_name, const char* info, string home_phone, string work_phone, string mobile_phone)
	{
		this->full_name = full_name;

		this->info = new char[strlen(info) + 1];
		strcpy_s(this->info, strlen(info) + 1, info);

		this->home_phone = home_phone;
		this->work_phone = work_phone;
		this->mobile_phone = mobile_phone;
	}

	void AddContact(string full_name, const char* info, string home_phone, string work_phone, string mobile_phone)
	{
		this->full_name = full_name;

		this->info = new char[strlen(info) + 1];
		strcpy_s(this->info, strlen(info) + 1, info);

		this->home_phone = home_phone;
		this->work_phone = work_phone;
		this->mobile_phone = mobile_phone;
	}

	void ShowContact()
	{
		cout << "Full name: " << full_name << endl;
		cout << "Info: " << info << endl;

		cout << "Home phone: " << home_phone << endl;
		cout << "Work phone: " << work_phone << endl;
		cout << "Mobile phone: " << mobile_phone << endl;
	}

	~PhoneBook()
	{ 
		if (info != nullptr)
		{
			delete[] info;
		}
	}
};


int main()
{
	PhoneBook Chendler("Chendler Bing", "vhto?", "+38 067 532 32 03", "+38 234 321 32 03", "+38 067 345 35 90");
	PhoneBook Fibi("Fibi Buffe", "vhto?", "+38 067 321 32 03", "+38 067 321 32 03", "+38 067 321 32 03");

	Chendler.ShowContact();
	cout << endl;
	Fibi.ShowContact();

	PhoneBook Joseph;
	Joseph.AddContact("Joseph Tribiani", "vhto?", "+38 067 322 32 03", "+38 067 228 32 03", "+38 067 229 32 03");
	cout << endl;
	Joseph.ShowContact();
}