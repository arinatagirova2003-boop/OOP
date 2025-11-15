#pragma once
#ifndef DISH_H
#define DISH_H

#include <iostream>
#include <string>
using namespace std;

class Dish
{
private:
	string name;
	float protein;
	float fat;
	float carbohydrate;
	float energy;
	bool isVegan;
	float calculateEnergy();

public:
	Dish(string, float, float, float, bool);
	Dish();
	Dish(string, bool);
	~Dish();
	void displayInfo();

	// Геттеры
	string getName();
	float getProtein();
	float getFat();
	float getCarbohydrate();
	float getEnergy();
	bool getIsVegan();

	// Сеттеры
	void setName(const string& n);
	void setProtein(float p);
	void setFat(float f);
	void setCarbohydrate(float c);
	void setIsVegan(bool v);
};
#endif