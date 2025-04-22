#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	bool check;
	int size,i,j,option;
	int arr[30];
	cout<<"=========OPTION OF ARRAY=========="<<endl;
	cout<<"1.Input"<<endl
		<<"2.Output"<<endl
		<<"3.Serach"<<endl
		<<"4.Update"<<endl
		<<"5.Delete"<<endl
		<<"6.Add"<<endl
		<<"7.Sort"<<endl
		<<"8.Insert"<<endl
		<<"9.Exit"<<endl;
	do{
		cout<<"Plese You Chose One Option Of Array:";cin>>option;
		switch(option)
		{
			case 1:{
				cout<<"Enter Size Of Array:";cin>>size;
				for(i=0;i<size;i++)
				{
					cout<<"Enter Number Of Array at Index["<<i<<"]=";cin>>arr[i];
				}
				break;
			}
			case 2:{
				cout<<"=========Ouput Of Array================"<<endl;
				for(i=0;i<size;i++)
				{
					cout<<"Elements Of array At Index["<<i<<"]"<<arr[i]<<endl;
				}
				break;
			}
			case 3:{
			
				int search;
				cout<<"Enter Number To Search:";cin>>search;
				check=true;
				for(i=0;i<size;i++){
					if(search==arr[i])
					{
						
						cout<<"Elements Of array At Index["<<i<<"]"<<arr[i]<<endl;
						cout<<"========================\n";
						cout<<"||  Search Is See...   ||"<<endl;
						cout<<"========================\n";
						check=false;
						break;
					}
					
				}
				if(check){
						cout<<"===========================\n";
						cout<<"||  Search Is Not See...   ||"<<endl;
						cout<<"===========================\n";	
					}
				
			}break;
			case 4:{
				int update;
				cout<<"Enter Number TO You Want To Update Of Array:";cin>>update;
				check=true;
				for(i=0;i<size;i++)
				{
					if(update==arr[i])
					{
						cout<<"Update Number At index["<<i<<"]:";cin>>arr[i];
						cout<<"========================\n";
						cout<<"||  Update Is Done...   ||"<<endl;
						cout<<"========================\n";
						check=false;
						break;
					}
				}
				if(check)
				{
						cout<<"=============================================\n";
						cout<<"||  Search Is Not See You Can't Update...   ||"<<endl;
						cout<<"=============================================\n";
				}
				
			}break;
			case 5:{
				int delate;
				check=true;
				cout<<"Enter Number To you Want To Delete:";cin>>delate;
				for(i=0;i<size;i++)
				{
					if(delate==arr[i])
					{
						for(j=i;j<size-1;j++)
						{
							arr[j]=arr[j+1];
						}
						size--;
						cout<<"========================\n";
						cout<<"||  Delate Is Done...   ||"<<endl;
						cout<<"========================\n";
						check=false;
					}
				}
					if(check){
						cout<<"=============================================\n";
						cout<<"||  Search Is Not See You Can't Update...   ||"<<endl;
						cout<<"==============================================\n";	
					}
				break;
			}
			case 6:{
				int add;
				cout<<"Add New Size Of Array:";cin>>add;
				if(add+size<=30)
				{
					for(i=size;i<size+add;i++)
					{
						cout<<"Enter New Number Of Array At Index["<<i<<"]:";cin>>arr[i];
						
					}
					size+=add;
						cout<<"========================\n";
						cout<<"||  Add Is Done...   ||"<<endl;
						cout<<"========================\n";
				}else{
						cout<<"==========================================\n";
						cout<<"||  Size Is Full You Can't Add More...   ||"<<endl;
						cout<<"==========================================\n";	
				}
				
			}break;
			case 7:{
				
				for(i=0;i<size-1;i++)
				{
					for(j=i+1;j<size;j++){
						if(arr[i]>arr[j])
						{
							int temp;
							temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
							
						}
					}
				}
						cout<<"========================\n";
						cout<<"||   Sort Is Done...   ||"<<endl;
						cout<<"========================\n";
				break;
			}
			case 8:{
				int position,value;
				cout<<"Enter Position To Insert Index Array (0 - "<<size<<"):";cin>>position;
				if(position<size){
					cout<<"Enter New Value:";cin>>value;
					for(i=size;i>position;i--){
						arr[i]=arr[i-1];
					}
					arr[position]=value;
					size++;
					cout<<"==============================\n";
					cout<<"||  Insert Is Successfuly   ||"<<endl;
					cout<<"==============================\n";	
				}else{
					cout<<"============================\n";
					cout<<"|| 	Can't Insert......   ||"<<endl;
					cout<<"============================\n";
				}
				break;
			}
			case 9:{
					cout<<"============================================================\n";
					cout<<"||  Good Luck Everyone whish You Sucess In your IT life   ||"<<endl;
					cout<<"============================================================\n";
					exit(0);
				break;
			}
		}
		again:
		cout<<"PLease Enter To Continue.........!"<<endl;
		if(getch()==13)
		{
			system("cls");
		}else{
			goto again;
		}
		
	}while(option<10);
	
}
