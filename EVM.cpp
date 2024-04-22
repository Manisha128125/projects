#include<iostream>
using namespace std;
class ELECTION{
	public:
	       int x,i ,n;
		   int count1=0 ,count2=0;
		   int count3=0,count4=0,count5=0;
	       	void display()
			   {
	       		   cout<<"ELECTRONIC VOTING MACHINE"<<endl;
	       		   cout<<"RULE FOR VOTING ARE FOLLOWING::"<<endl;
				   cout<<" 1. One person can vote once "<<endl<<"2. After you vote you can not change the vote ."<<endl;
				   cout<<"ENTER THE NUMBERS OF CANDIDATE"<<endl;
				   cin>>n;
				   cout<<" PRESS 1 FOR BJP"<<endl<<"PRESS 2 FOR CONGRESS"<<endl<<"PRESS 3 AAP"<<endl<<"PRESS 4 FOR SANATAN"<<endl<<"PRESS 5 FOR NON"<<endl;			   }
			void vote()
			{ for(i=0;i<n;i++)
			 {
				cout<<"ENTER THE NUMBER"<<endl;
				cin>>x;
				if(x==1){
					count1++;
				}
			    else if(x==2){
					count2++;}
				else if(x==3){
					count3++;}
				else if(x==4){
					count4++;}
				else { 
				  count5++;
				}
		   	  }
			}
			void comp()
			{
			  if(count1>count2&&count1>count3&&count1>count4&&count1>count5)
			  {
			    printf("BJP IS THE WINNER");
			  }	
			  else if(count2>count1&&count2>count3&&count2>count4&&count2>count5)
			  {
			    printf("CONGRESS IS THE WINNER");
			  }	
			  else if(count3>count2&&count3>count1&&count3>count4&&count3>count5)
			  {
			    printf("AAP IS THE WINNER");
			  }	
			   else if(count4>count2&&count4>count1&&count4>count3&&count4>count5)
			  {
			    printf("SANATAN IS THE WINNER");
		     }
		     else
		     {
		     	printf("NO ONE IS WINNER");
			 }
			 
			}
			
};
  int main()
  { 
	 ELECTION obj;
	 obj.display();
	 obj.vote();
	 obj.comp();
	 return 0; 
	 }
  
