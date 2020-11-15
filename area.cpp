// Program to implement switch statement to find the area of Rectangle/ Circle / Triangle
#include<iostream>
using namespace std;
int main() 
{
    float l_rect,b_rect,a_rect,r_circle,a_circle,b_tri,h_tri,a_tri;
    int ch;
    cout<<" ENTER YOUR CHOICE = ";
    cout<<" \n 1.Rectangle \n 2.Circle \n 3. Triangle \n";
    cin>>ch;
    switch(ch)
    {
        	case 1 : cout<<" ENTER THE LENGTH AND BREADTH = ";
        	cin>>l_rect>>b_rect;
        	cout<<" \n AREA OF THE RECTANGLE = "<<l_rect*b_rect;
		break;
		case 2 : cout<<" ENTER THE RADIUS = ";
		cin>>r_circle;
		cout<<" \n AREA OF THE CIRCLE = "<<3.14*r_circle*r_circle;
		break;
		case 3 : cout<<" ENTER THE BREADTH AND HEIGHT = ";
		cin>>b_tri>>h_tri;
		cout<<" \n AREA OF THE TRIANGLE = "<<(b_tri*h_tri)/2;
		break;
    }
    return 0;
} 
