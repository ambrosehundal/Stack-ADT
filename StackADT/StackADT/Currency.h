#pragma once
#ifndef CURRENCY_H
#define CURRENCY_H

#include <string>
#include <iostream>

using namespace std;

class Currency {
public:
	string currencyname;
	int whole;
	int fraction;
	string fractionalname;
	int partsPerwhole;


	friend ostream& operator<< (ostream&out, Currency c);
};

#endif