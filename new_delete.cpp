//new and delete operator in c++
//use is the new and delete operator is flexibility provided to programmers. with the help of this we can easily allocate and deallocate memory whenever we need it and whenever we don't need it anymore.



#include<iostream>
using namespace std;

int main(){

		int *p = NULL;     //pointer initialize to null

		//request memory for the variable using new operator
		p = new(nothrow) int;

		if(!p){
			cout<<"allocation of memory failed";
		}

		else{
			//store value at allocated address
			*p=29;
			cout<<"Value of p: "<<*p<<endl;
		}

		//request block of memory using new operator
		float *r = new float(75.25);

		cout<< "Value of r: "<<*r<<endl;

		int n = 5;
		int *q = new(nothrow) int[n];

		if(!q)
			cout<< "allocation of memory failed\n";
		else{
			for(int i=0; i<n; i++)
				q[i] = i+1;

			cout<< "Value store in block of memory: ";
			for(int i = 0; i<n; i++)
				cout<< q[i] <<" ";
		}

		//freed the allocated memory
		delete p;
		delete r;

		delete[] q;

		return 0;
	}


/*output

Value of p: 29
Value of r: 75.25
Value store in block of memory: 1 2 3 4 5 
*/



