#pragma once

class Variable : Var
{
private:
	bool* isFinal;
	bool* isStatic;
public:
	void setType(char* type);
	char* getType();

	void setValue(void* value);
	void* getValue();

	void setIsFinal(bool* isFinal){
		this->isFinal = isFinal;
	}
	bool* getIsFinal(){
		return this->isFinal;
	}

	void setIsStatic(bool* isStatic){
		this->isStatic = isStatic;
	}
	bool* getIsStatic(){
		return this->isStatic;
	}

	Variable(){
	}
	Variable(char* type, void* value, bool* isFinal, bool* isStatic){
		this->setType(type);
		this->setValue(value);
		this->isFinal = isFinal;
		this->isStatic = isStatic;
	}
	virtual ~Variable(){
	}
};

