#ifndef CTABLE_HPP
#define CTABLE_HPP
#include "cDices.hpp"
#include<vector>

class cTable
{
public:
	cTable();
	~cTable();
	std::vector<cDices>getTable () ;
private :
std::vector<cDices> table;
};

#endif // CTABLE_HPP
