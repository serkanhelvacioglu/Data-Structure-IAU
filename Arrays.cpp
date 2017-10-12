#include<iostream>

using namespace std;

int main()
{
	
	int scores[10];
	int totalScore;
	
	for(int i=0; i<10;i++)
		{
			cout<<"Please enter "<<i+1<<". Score: ";
			cin>>scores[i];
			cout<<endl;
			
		}
		
	for(int i=0; i<10;i++)
		{
			cout<<"The score of the "<<i+1<<". Stutent: "<<scores[i]<<endl;
			totalScore+=scores[i];
			
		}
		cout<<"Average of the total score: ";
			cout<<totalScore/10<<endl;
	
}
