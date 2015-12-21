#pragma once
#include "Map.h"
class Scope
{
public:
	Map* variablesMap;
	Map* classesMap;
	Map* functionsMap;
	Scope* parent;

	Scope(Scope* parent){
		this->variablesMap = new Map();
		this->classesMap = new Map();
		this->functionsMap = new Map();
		this->parent = parent;
	}
	virtual ~Scope(){
	}
};

