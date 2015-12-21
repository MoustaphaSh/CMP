#pragma once
#include "Variable.h"

class DataMember : Variable
{
private:
	Modifiers* modifier;
public:
	void setType(char* type);
	char* getType();

	void setValue(void* value);
	void* getValue();

	void setIsFinal(bool* isFinal);
	bool* getIsFinal();

	void setIsStatic(bool* isStatic);
	bool* getIsStatic();

	void setModifier(Modifiers* modifier){
		this->modifier = modifier;
	}
	Modifiers* getModifier(){
		return this->modifier;
	}

	DataMember(char* type, void* value, bool* isFinal, bool* isStatic, Modifiers* modifier){
		this->setType(type);
		this->setValue(value);
		this->setIsFinal(isFinal);
		this->setIsStatic(isStatic);
		this->modifier = modifier;
	}
	virtual ~DataMember(){
	}
};

