# include <iostream>
using namespace std;
int main()
{
	string name ;
	float weight, days;
	
	cout<<"Enter the name of person:";
	cin>>name;
	
	cout<<"Enter the target weight loss in (kg):";
	cin>>weight;
	
	days=weight*15;
	cout<<name<<" will take "<<days<<" days to loss "<<weight<< "kg of weight by folllowing doctor suggestion.";
	
	return 0 ;
	
	
}
