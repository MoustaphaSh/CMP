#pragma once

class Variable
{
public:
	Modifiers modifier=Modifiers::None;
	bool isFinal=0;
	bool isStatic=0;
	bool isRef=0;
	char type;
	void* value;

	Variable(bool isFinal, bool isStatic, char type, void* value)
	{
		this->type = type;
		this->value = value;
		this->isFinal = isFinal;
		this->isStatic = isStatic;
	}
	Variable(bool isRef, char type, void* value)
	{
		this->type = type;
		this->value = value;
		this->isRef = isRef;
	}
	Variable(Modifiers modifier, bool isFinal, bool isStatic, char type, void* value)
	{
		this->type = type;
		this->value = value;
		this->isFinal = isFinal;
		this->isStatic = isStatic;
		this->modifier = modifier;
	}
	virtual ~Variable()
	{
	}
};