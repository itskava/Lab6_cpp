#include "BaseAccount.h"

BaseAccount::BaseAccount() 
	: Account() 
{}

BaseAccount::BaseAccount(const BaseAccount& other) {
	this->name = other.name;
	this->email = other.email;
	this->telephone = other.telephone;
	this->age = other.age;
	this->balance = 0;
}

BaseAccount::BaseAccount(const std::string& name, const std::string& email, const std::string& telephone, short age)
	: Account(name, email, telephone, age) 
{}

BaseAccount::~BaseAccount() = default;

BaseAccount BaseAccount::createFromConsole() {
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

	return BaseAccount(name, email, telephone, age);
}

void BaseAccount::displayAccountInfo() const {
	std::cout << "���: " << name << std::endl;
	std::cout << "���������� �������: " << telephone << std::endl;
	std::cout << "����� ����������� �����: " << email << std::endl;
	std::cout << "�������: " << age << std::endl;
	std::cout << "������: " << balance << std::endl;
}

std::ostream& operator<<(std::ostream& out, const BaseAccount& obj) {
	return out;
}