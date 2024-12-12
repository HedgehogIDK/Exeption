#pragma once
#include "Exeption.h"

class InvalidData : public Exeption
{
	string massage;
public:
	InvalidData() = delete;
	explicit InvalidData(string massage_p) : massage{ massage_p } {}

	virtual string what()const noexcept override { return massage; };
	virtual ~InvalidData() = default;
};

