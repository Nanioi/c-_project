#include"Human.h"
#include"UserError.h"

Human::Human(char *name, int age)
{
	setName(name);
	setAge(age);
	prn();
}

void Human::setName(char *name)
{
	if(!(strlen(name)>=2 && strlen(name)<=8))
		throw UserError("이름은 2~8글자로 쓰셈");

	strcpy(this->name,name);
}

void Human::setAge(int age)
{
	if(!(age>=0 && age<=120))
		throw UserError("나이는 0~120세로 쓰셈");

	this->age=age;
}

void Human::prn()
{
	cout<<"name : "<<name<<"\t age: "<<age<<endl;
}