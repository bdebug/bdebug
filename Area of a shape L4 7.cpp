#include <iostream>
using namespace std;
int main ()
{
	string shape;
	float length1, length2, width, radius, height, base, areas, arear, areac, areat;
	
	cout<<"Name the of the shape:";
	cin>>shape;
	
	if (shape== "square")
	{
	   cout<<"lenght of its side:";
	   cin>>length1;
	   areas= length1*length1;
	   cout<<"Area of square is:"<<areas;
    }       
    
    if (shape== "rectangle")
    {
    	cout<<"lenght of its side:";
    	cin>>length2;
    	cout<<"width of its side:";
    	cin>>width;
    	arear= length2*width;
    	cout<<"Area of rectnagle is:"<<arear;
    	
	}
	   if (shape== "circle")
	   
	{
	   	cout<<"radius of circle";
	   	cin>>radius;
	   	
	   	areac=3.14*radius*radius;
	   	cout<<"Area of circle is:"<<areac;
    }
	
	if (shape=="triangle")
	 {
	 	cout<<"height of triangle:";
	 	cin>>height;
	 	
	 	cout<<"base of triangle";
	 	cin>>base;
	 	
	 	areat= 1/2*(base*height);
	 	cout<<"Area of triangle:"<<areat;
	 	
	 }
	 
	 return 0 ;
	 
}
