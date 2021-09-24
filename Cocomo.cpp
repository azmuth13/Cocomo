#include <iostream> 
#include <bits/stdc++.h>

using namespace std; 


// Driver Code

class cocomo{

	unordered_map < int, vector <double> > modelValues;
   	public:
   	double ab, bb, cb, db;
   	double Effort, Time;

   	cocomo(int num)
   	{
   		modelValues[1] = {2.4, 1.05, 2.5, 0.38};
   		modelValues[2] = {3.0, 1.12, 2.5, 0.35};
   		modelValues[3] = {3.6, 1.20, 2.5, 0.32};

   		ab = modelValues[num][0], bb = modelValues[num][1];
   		cb = modelValues[num][2], db = modelValues[num][3];
   	}

   	double effort(int KLOC)
   	{
   		return Effort = ab * pow(KLOC, bb);
   	}

   	double time()
   	{
   		return Time = cb * pow(Effort, db);
   	}

};

int main() 
{   
	char approval = 'Y';

	while(1)
	{

		double KLOC;
		int num;

	   	cout<<"Enter lines of code in KLOC\n";
	   	cin >> KLOC;

	   	cout<<"Choose your Cocomo model\n";
	   	cout<<"1. Organic\n";
	   	cout<<"2. Semidetached\n";
	   	cout<<"3. Embedded\n";

	   	cout<<"Enter the option number (1/2/3)\n";
	   	cin >> num;
	   	if(num != 1 && num != 2 && num!= 3)
	   	{
	   		cout<<"Wrong input. Please choose correct model next time\n";
	   		return 0;
	   	}

	   	cocomo model(num);

	   	cout<<"\n";
	   	cout<<"Effort : "<<model.effort(KLOC)<<" Person-months\n";
	   	cout<<"Development Time : "<<model.time()<<" Months\n\n";

	   	cout<<"To check another press Y else press any character to exit\n\n";

	   	cin >> approval;
	   	if(approval != 'Y')
	   	{
	   		cout<<"Terminating..";
	   		return 0;;
	   	}

	   	cout<<"----------------------------------------------------------------\n";

	}
	
		
	return 0; 
   	
}