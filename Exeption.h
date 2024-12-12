#pragma once
#include <iostream>

using namespace std;

class Exeption
{
public:
	Exeption()noexcept = default;

	virtual string what()const noexcept { return "Exeption"; };
	virtual ~Exeption() = default;
};

