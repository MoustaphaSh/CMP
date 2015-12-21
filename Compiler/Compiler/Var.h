#pragma once
class Var
{
private:
	char* type;
	void* value;
public:
	void setType(char* type){
		this->type = type;
	}
	char* getType(){
		return this->type;
	}

	void setValue(void* value){
		this->value = value;
	}
	void* getValue(){
		return this->value;
	}

	Var(){

	}
	Var(char* type, void* value){
		this->type = type;
		this->value = value;
	}
	virtual ~Var(){
	}
};