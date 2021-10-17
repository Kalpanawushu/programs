#include <iostream>
#include <iomanip>
using namespace std;
class Candidate
{
public:
 int Cid;
 char Cname[25];
 int votes;
 void getdetails();
 void displaydetails();
};
void Candidate::getdetails()
{
 cout<<"\n  Enter the id no of candidates\t";
 cin>>Cid;
 cout<<"\n Enter the name:\t";
 cin>>Cname;
 cout<<"\n NUmbe rof votes :\t";
 cin>>votes;
}
void Candidate::displaydetails()
{
 cout<<"\n"<<Cid<<setw(22)<<Cname<<setw(15)<<votes;
 
}
int main()
{
 int i,n;
 Candidate CD[100];
 cout<<"ENTER THE TOTAL NO.OF CANDIDATES:";
 cin>>n;
 for(int i=0;i<n;i++)
 {
 CD[i].getdetails();
 }
 
 cout<<setw(15)<<"\nID.No"<<setw(20)<<" NAME "<<setw(18)<< " NO.OF VOTES";

 for(i=0;i<n;i++)
 {
 CD[i].displaydetails();
 }
 
 int S=CD[i].votes;
 string winner=CD[i].Cname;
 for(i=1;i<n;i++)

 {
 if (CD[i].votes > S)
 {
 S=CD[i].votes;
 winner=CD[i].Cname;
 }
 }
 cout<<"\n";
 cout <<"\nTHE WINNER OF THE ELECTION IS " <<winner<<" WITH " << S << " VOTES " <<endl;
 return 0;
}


