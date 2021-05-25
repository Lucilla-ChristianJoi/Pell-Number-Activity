#include<iostream>

using namespace std;
 
int pellnum(int n)

{
   if ( n>=2)
   {
   		return  2*pellnum(n-1) + pellnum(n-2);
   }
   
   return n;
}
	

int main()
{
	
	
int n;
	

	for (int i=0; i < n;i++)
	{	
		cout << "Pell Numbers Sequence are: " << pellnum(i)<<endl;	
		
	}
   return 0;
}

