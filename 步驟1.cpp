#include <iostream>
#include <iomanip>
using namespace std;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
    
int main()
{
    int tortoise = 10; //烏龜 
    int hare = 20; //兔子 
    printCurrentPositions(&tortoise, &hare);
}

/*印出烏龜與兔子位置*/
void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr ){

	for(int i = 0 ; i <=5 ; i++){
		cout<<"---------|";
	}
	cout<<endl;
	cout<<setw(*bunnyPtr)<<"H"<<endl;
	cout<<setw(*snapperPtr)<<"T"<<endl; 
}
	
