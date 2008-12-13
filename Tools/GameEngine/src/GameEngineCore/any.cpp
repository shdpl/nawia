#include "any.h"

float anyToFloat(anyType* in)
{
	std::string temp;
	switch(in->getType())
	{
	case anyTypeType::stdstring:	
		temp = ((anyString*)in)->getValue();
		return float(temp.size());
	case anyTypeType::floating:
		return ((anyFloat*)in)->getValue();
	case anyTypeType::integer:
		return float(((anyInt*)in)->getValue());
	case anyTypeType::boolean:
		return float(((anyBool*)in)->getValue());
	}
}
int anyToInt(anyType* in)
{
	std::string temp;
	switch(in->getType())
	{
	case anyTypeType::stdstring:	
		temp = ((anyString*)in)->getValue();
		return int(temp.size());
	case anyTypeType::floating:
		return int(((anyFloat*)in)->getValue());
	case anyTypeType::integer:
		return ((anyInt*)in)->getValue();
	case anyTypeType::boolean:
		return int(((anyBool*)in)->getValue());
	}
}
std::string anyToString(anyType* in)
{
	std::stringstream ss;
	switch(in->getType())
	{
	case anyTypeType::stdstring:	
		return ((anyString*)in)->getValue();
	case anyTypeType::floating:
		ss <<  ((anyFloat*)in)->getValue();
		return ss.str();
	case anyTypeType::integer:
		ss << ((anyInt*)in)->getValue();
		return ss.str();
	case anyTypeType::boolean:
		ss << ((anyBool*)in)->getValue();
		return ss.str();
	}
}
bool anyToBool(anyType* in)
{
	std::string temp;
	switch(in->getType())
	{
	case anyTypeType::stdstring:	
		temp = ((anyString*)in)->getValue();
		if(temp.size() > 0) return true;
		return false;
	case anyTypeType::floating:
		if(((anyFloat*)in)->getValue() > 1.0f) return true;
		return false;
	case anyTypeType::integer:
		if(((anyInt*)in)->getValue() > 0) return true;
		return false;
	case anyTypeType::boolean:
		return ((anyBool*)in)->getValue();
	}
}