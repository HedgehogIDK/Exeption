#pragma once
#include "Exeption.h"

class OutOfRange : public Exeption
{	
	string massage;
public:
	OutOfRange() = delete;
	explicit OutOfRange(string massage_p) : massage{ massage_p } {}

	virtual string what()const noexcept override{ return massage; };
	virtual ~OutOfRange() = default;
};

