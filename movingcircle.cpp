#include <graphics.h>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>

using namespace std;


//Muhammed Ali Sarimese 
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "");
	 label: 
	 		
	
       line(50,120,570,120); 
        line(50,360,570,360);
		

	    line(50,120,50,360); 
	    line(570,120,570,360);
	    
	
	int yaricap= 15;
	int maxy=345;
	int miny=135;	
	int maxx=555;
	int minx=70;
	
	

   srand(time(0));
   int circley = rand() % (maxy - miny + 1 ) + miny;
   int circlex = rand() % (maxx - minx + 1 ) + minx;
   
   
	for(int t=0; t<100;t++) 
	{
			
	setcolor(RED);	
	
		 circle(circlex+3*t,circley+3*t,yaricap); 
	   	 delay(105);
	
       if(circley+3*t>344 ||circlex+3*t>554 )
	   {
	   	 circlex= 0;  
	     circley= 0;  
	     
	    cleardevice(); 
	   	goto label;
	   }
	    setcolor(BLACK); 
        circle(circlex+3*t,circley+3*t,yaricap);
	}
	
	getch();
}
//Muhammed Ali Sarimese 

