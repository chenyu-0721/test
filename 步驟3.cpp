#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
void moveTortoise( int *const );
void moveHare( int * const );

int main()
{
    int tortoise=1;
    int hare = 1;
    int total = 0 ;
    srand( time( 0 ) );
    clock_t start, end ; 
   
   start = clock();
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 100 );
      system("cls");
	      
      moveTortoise( &tortoise );
      moveHare(&hare);
      printCurrentPositions( &tortoise, &hare );
   }
   end = clock();
   
    if(tortoise == RACE_END )
      	cout<<"TORTOISE WINS!!!YAY!!!"<<endl; 
    else if(hare == RACE_END)
      	cout<<"Hare wins. Yuch." <<endl;
    else
    	cout<<"It's a tie!"<<endl;
    cout<<"Time elapsed = " << (end-start)/1000  << " seconds" ; 
}

/*印出烏龜與兔子位置*/
void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr ){

	for(int i = 0 ; i <=6 ; i++){
		cout<<"---------|";
	}
	cout<<endl;
	cout<<setw(*bunnyPtr)<<"H"<<endl;
	cout<<setw(*snapperPtr)<<"T"<<endl; 
}
/*移動烏龜*/
void moveTortoise( int * const turtlePtr ){
	
	int a ;
	a = rand()%10;
	
	*turtlePtr += ( a>=0 and a<=4) ? 3 : (a>4 and a<=7) ? 1 : -6 ;
	*turtlePtr = ( *turtlePtr>70 ) ? 70 : (*turtlePtr<0) ? 0 : *turtlePtr ;	
}

/*移動兔子*/
void moveHare( int * const rabbitPtr ){
  	
	int a ;
	a = rand()%10;
	
	*rabbitPtr += ( a>=0 and a<2) ? *rabbitPtr : (a>=2 and a<4) ? +9 : ( a=5 ) ? -12 : (a>5 and a<9) ? +1 : -2 ;
	*rabbitPtr = ( *rabbitPtr>=70 ) ? 70 : (*rabbitPtr<0) ? 0 : *rabbitPtr ;
	
}
