#include <iostream>
#include "cDices.hpp"
#include "cTable.hpp"
using namespace std;
int main(int argc, char **argv) 
{ 
			cTable tab ;
			for (auto it=tab.getTable().begin();it !=tab.getTable().end();++it)
						cout << it->getdvalue() << "\t" << it->getovalue() << endl;
				
}
