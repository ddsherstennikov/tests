#pragma once

#include <iostream>

using namespace std;



#define REGISTER(Obj, type, subtype) template<> Registrar<Obj> Registrar<Obj>::object(type, subtype);



template <typename Obj>
class Registrar
{
	static Registrar object;

public:
	Registrar(const std::string& type, const std::string& subtype)
	{
		std::cout << type << " " << subtype << std::endl;
	}
};