#include "PremiumAccount.h"

PremiumAccount::PremiumAccount() 
	: Account()
{
	bonuses = 0;
}

PremiumAccount::PremiumAccount(const PremiumAccount& other) {
	this->name = other.name;
	this->email = other.email;
	this->telephone = other.email;
	this->age = other.age;
	this->balance = 0;
	this->bonuses = 0;
}

PremiumAccount::PremiumAccount(const std::string& name, const std::string& email, const std::string& telephone, short age)
	: Account(name, email, telephone, age)
{
	bonuses = 0;
}

PremiumAccount::~PremiumAccount() = default;

PremiumAccount PremiumAccount::createFromConsole() {
	std::string name, email, telephone;
	int age;
	std::cout << "������� ���� ���: ";
	std::getline(std::cin, name);

	std::cout << "������� ��� ����� ����������� �����: ";
	std::getline(std::cin, email);

	std::cout << "������� ��� �������: ";
	std::getline(std::cin, telephone);

	std::cout << "������� ��� �������: ";
	std::cin >> age;

	return PremiumAccount(name, email, telephone, age);
}

void PremiumAccount::setDefaultValues() {
	this->name = "";
	this->email = "";
	this->telephone = "";
	this->age = 0;
	this->balance = 0;
	this->bonuses = 0;
}

unsigned int PremiumAccount::calculateBonuses(int ticket_price) const {
	return static_cast<unsigned int>(ticket_price * cashback_percent);
}

void PremiumAccount::displayAccountInfo() const {
	std::cout << "���: " << name << std::endl;
	std::cout << "���������� �������: " << telephone << std::endl;
	std::cout << "����� ����������� �����: " << email << std::endl;
	std::cout << "�������: " << age << std::endl;
	std::cout << "������: " << balance << std::endl;
	std::cout << "���������� �������: " << bonuses << std::endl;
}

// TODO
std::ostream& operator<<(std::ostream& out, const PremiumAccount& obj) {
	return out;
}