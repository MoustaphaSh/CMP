#pragma once
#include "Map.h"

class FunctionScope
{
public:
	Modifiers modifer;
	Map* parameters;
	void* returnValue;

	Map variables();
	Map classes();
	Map functions();
	void* parent;

	FunctionScope(void* parent)
	{
		this->parent = parent;
	}
	virtual ~FunctionScope()
	{
	}
};

