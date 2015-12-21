#pragma once
#include "Scope.h"

class Class
{
private:
	Class* inheritedType;
	Scope* classScope;
public:
	Map* dataMembersMap;

	void setInheritedType(Class* inheritedType){
		this->inheritedType = inheritedType;
	}
	Class* getInheritedType(){
		return this->inheritedType;
	}

	void setClassScope(Scope* classScope){
		this->classScope = classScope;
	}
	Scope* getClassScope(){
		return this->classScope;
	}

	Class(Scope* parent, Class* inheritedType){
		this->inheritedType = inheritedType;
		this->dataMembersMap = new Map();
		this->getClassScope = new Scope(parent);
	}
	virtual ~Class(){
	}
};

