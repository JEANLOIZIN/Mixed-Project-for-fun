#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

const int size = 5;           
void swap(char[], char[]);    
void swap(int &, int &);  

int main()
{
	srand((unsigned)time(0));  
	int arr1[1000], arr2[1000];
	int steps_seq, steps_binary;
	for(int index=0; index<1000; index++)
	{ 
        arr1[index] = (rand()%1000)+1;
		arr2[index] = arr1[index];
        cout << arr1[index]<<" "; 
    }

 int data[size];              
 int i;
 
 for(i=0; i<size; i++)        
 {
  indata>>name[i];            
  indata>>data[i];           
 }
         
 for(i=0; i<size; i++)
 {
  cout<<i+1<<"."<<arr1[i]<<"  "<<data[i]<<endl;
 }

 for(i=0; i<size-1; i++)  
 	for(int j=0; j<size-1-i; j++) 
  		if(strcmp(arr1[j],name[j+1])>0)
  {                              
   			swap(name[j], name[j+1]);  
			   swap(data[j], data[j+1]);  
  }
         
 for(i=0; i<size; i++)
 cout<<"\n"<<i+1<<"."<<arr1[i]<<"  "<<data[i];

 cout<<"\n Enter name to search :";
 int search;
 cin>>search;                 
 for(i=0; i<size; i++)
 if(strcmp(search, arr1[i])==0)
  break;                      
 if(i<size)                  
 {                            
  cout<<"\n Name and the data record are found =";
  cout<<"  "<<name[i]<<"  "<<data[i];
 }
 else                         
  cout<<"\n Name is not found.";
 indata.close();             

 
 return 0;
}

void swap(char n1[], char n2[])
{                              
 char n3[20];                  


 strcpy(n3,n1);                
 strcpy(n1,n2);                
 strcpy(n2,n3);               
 return;
}                              

void swap(int &x, int &y)      
{                             
 int temp;                    
 temp = x;                    
 x = y;                        
 y = temp;                     
 return;                       
}                              