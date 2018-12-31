#include "cTable.hpp"
#include <iostream>
cTable::cTable()
{
		    
			
			for (int i=1;i<7;i++){
						for(int j=1;j<7;j++){
							std::cout <<i+j << " " << i << j << std::endl ;
									cDices cdices(i,j);
									table.push_back( cdices) ;
									if(j==i) 
												break ;
									}
						}
			
}
 std::vector<cDices> cTable::getTable(){
			return table ;
}

cTable::~cTable()
{
}

