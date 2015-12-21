#pragma once
#include "Scope.h"

class Function
{
public:
	Map* parametersMap;
	void* returnValue;
	Scope* functionScope;

	void setReturnValue(Scope* returnValue){
		this->returnValue = returnValue;
	}
	void* getReturnValue(){
		return this->returnValue;
	}

	void setFunctionScope(Scope* functionScope){
		this->functionScope = functionScope;
	}
	Scope* getFunctionScope(){
		return this->functionScope;
	}

	Function(Scope* parent, Map* parametersMap, void* returnValue){
		this->parametersMap = parametersMap;
		this->returnValue =returnValue;
		this->functionScope = new Scope(parent);
	}
	virtual ~Function(){
	}
};

