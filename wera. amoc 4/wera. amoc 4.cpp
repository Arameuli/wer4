#include <iostream>
#include<string>
#include"Cat.h"
#include"Dog.h"
#include"Parrot.h"
#include"Pet.h"
using namespace std;
int main()
{
	Pet t;
	Cat s;
	Dog p;
	Parrot z;
	cout << "pet" << endl;
	cin >> t.name >> t.year;
	cout << endl << "Dog" << endl;
	cin >> p.name >> p.jishi >> p.year;
	cout << endl << "Cat" << endl;
	cin >> s.name >> s.year;
	cout << endl << "Parrot" << endl;
	cin >> z.name >> z.year;


}

