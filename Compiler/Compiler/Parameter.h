#pragma once
class Parameter : Var
{
private:
	bool* isRef;
public:
	void setType(char* type);
	char* getType();

	void setValue(void* value);
	void* getValue();

	void setIsRef(bool* IsRef){
		this->isRef = IsRef;
	}
	bool* getIsRef(){
		return this->isRef;
	}

	Parameter(char* type, void* value, bool* isRef){
		this->setType = type;
		this->setValue = value;
		this->isRef = isRef;
	}
	virtual ~Parameter(){
	}
};

