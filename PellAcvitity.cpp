#include<iostream>
using namespace std;
 
int bellnum(int n)

{
   if ( n>=2)
   {
   		return  2*bellnum(n-1) + bellnum(n-2);
   }
   
   return n;
}
	

int main()
{
	
	
int n;
	for (int i=0;i<n;i++)
	{
		
		cout << "Pell Numbers Sequence are: " << bellnum(i)<<endl;	
		
	}

	
   return 0;
}

