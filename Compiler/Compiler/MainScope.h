#pragma once
#include "Map.h"
#include "Scope.h"
#include <iostream>
using namespace std;


class MainScope :public Scope
{
public:
	Map variables();
	Map classes();
	Map functions();
	void* parent;


	void insertVariable(int i){
		cout << "MAIN S";
	}

	MainScope()
	{}
	MainScope(void* parent)
	{
		this->parent = parent;
	}
	virtual ~MainScope()
	{
	}
};

