#include "cDices.hpp"
//Todo : <> operator uberschreiben -> sort in vector nutzbar
//  2 constructoren rand und setter
// value function
cDices::cDices(short a,short b)
{
			if ((a==1&&b==2)||(a==2&&b==1)){		// Mexico
						dvalue = 21 ;
						ovalue = 10000;
						return ;
			}
			if (a>b) {
						dvalue = a*10+b ;
						ovalue = a*100+b ;
						return ;
			}
			if (b>a){
						dvalue = b*10+a ;
						ovalue= b*100+a ;
						return;
			}
			if (a==b){
						dvalue = a*10+b ;
						ovalue = a*1000 ;
						return ;
			}
}

cDices::~cDices()
{
}

	short cDices::getdvalue(){
				return dvalue; } 
	int cDices::getovalue() {
				return ovalue; }
