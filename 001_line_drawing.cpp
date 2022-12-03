#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class draw_line
{
	public:
		int n,x1,y1,x2,y2;
		void getdata();
		void display();
};
void draw_line :: getdata()
{	
	cout << "How many line you have to draw:";
	cin >>	n;
		
	for ( int i = 0 ; i < n ; i++ )
	{
		cout <<"Enter the x1,y1,x2,y2 :";
		cin >> x1 >> y1 >> x2 >> y2;
	}		
}

void draw_line :: display()
{
line ( x1 , y1 , x2 , y2);
}
int main()
{
	draw_line l1;
	l1.getdata();
	
	int gd = DETECT , gm;
	initgraph( &gd , &gm , NULL); // gd = Graph Driver , gm = graph mode
	
	l1.display();
	delay(30000);
	closegraph();
	return 0;
}
