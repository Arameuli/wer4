#pragma once
#include<string>
#include"Pet.h"
using namespace std;
class Cat : public Pet
{
public:
	Cat();
	Cat(string name, int year);
};

