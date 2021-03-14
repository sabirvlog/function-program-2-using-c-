#include<iostream>
using namespace std;
void table()
{
	int t,l;
	cout<<"Enter table number: "<<endl;
	cin>>t;
	cout<<"Enter table Length: ";
	cin>>l;
	for(int i=1;i<=l;i++)
	{
		cout<<t<<"*"<<i<<"="<<t*i<<endl;
	}
}
   void table(int T,int L)
   {
    for(int i=1;i<=L;i++)
{
	cout<<T<<"*"<<"i"<<"="<<T*i<<endl;
}
   }
main()
{
	system("color 2f");
	table();  //without arguments.
	int t,l;
	cout<<"Enter table or length: ";
	cin>>t>>l;
	table(t,l);  //with arguments.
}
