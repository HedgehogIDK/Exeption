#pragma once
#include "Exeption.h"

class TypeError : public Exeption
{
	string massage;
public:
	TypeError() = delete;
	explicit TypeError(string massage_p) : massage{ massage_p } {}

	virtual string what()const noexcept override { return massage; };
	virtual ~TypeError() = default;
};

