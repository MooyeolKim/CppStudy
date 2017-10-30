#include "Person.h"

Person::Person(void) : id(0)
{
}

Person::Person(int id) : id(id)
{
}

int Person::GetId(void) const
{
	return id;
}

