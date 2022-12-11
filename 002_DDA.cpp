#include<iostream>
#include<math.h>
#include<graphics.h>
using namespace std;

int main()
{
	int gd = DETECT , gm ;
	
	int x1 , y1 , x2 , y2 , dx , dy , steps ,  xincr , yincr ;
	
	initgraph( &gd , &gm , NULL);
	
	cout << "Enter the x1 and y1:";
	cin >> x1 >> y1 ;
	
	cout << "\n Enter the x2 and y2:";
	cin >> x2 >> y2;
	
	dx = x2 - x1 ;
	dy = y2 - y1 ;
	
	if ( abs(dx) > abs(dy) )
	{
		steps = abs(dx);
	}
	else
	{
		steps = abs(dy);
	}
	
	xincr = dx / steps;
	yincr = dy / steps;
	
	for ( int i = 0 ; i < steps ; i++ )
	{
		putpixel (x1,y1,3);  // 3 for colour 
		
		x1 = x1 + xincr;
		y1 = y1 + yincr;
	}
	
	delay(30000);
	close graph();
	return 0;
}
