#pragma once
#ifndef Human_H
#define Human_H
#include <iostream>
class Human {
protected:
	std::string surname;
	std::string name;
	std::string midname;
	int age;
public:
	Human(std::string surname=" ", std::string name=" ", std::string midname=" ", int age =18) {
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;

	}
	~Human() {
		std::cout << "Dest hum" << "\n";
	}
	virtual void Print() = 0;
};

class Student : public Human
{
	bool on_lesson;
public:
	Student(std::string surname = " ", std::string name = " ", std::string midname = " ", int age = 18)
	{
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
	}
	~Student() {
		std::cout << "Dest stud" << "\n";
	}
	void Print() override {
		std::cout << surname << " " << name << " " << midname << " " << age << " " << "\n";
	}

};

class Boss :public Human {
protected:
	int number_of_works;
public:
	Boss(std::string surname = " ", std::string name = " ", std::string midname = " ", int age = 18)
	{
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
	}
	~Boss() {
		std::cout << "Dest boss" << "\n";
	}
	void Print() override {
		std::cout << surname << " " << name << " " << midname << " " << age << " " << "\n";
	}

};

#endif
