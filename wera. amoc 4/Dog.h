#pragma once
#include<string>
#include"Pet.h"
using namespace std;
class Dog : public Pet
{
public:
	string jishi;
	Dog();
	Dog(string name, string jishi, int year);
};

