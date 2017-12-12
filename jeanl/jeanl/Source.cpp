#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{


    ifstream file("prog1test.txt");

    string isProceed;

    while(true) 
        file >> isProceed;
        if(isProceed == "y"){
            int i=0,f=0,s=0;
            string arr;
            file >> arr;
            cout<<"Validating String "<<arr<<" ..."<<endl;

            while(arr[i]!='\0' && f==0)
            {
                cout<<"State "<<s<< " to ";
                switch(s)
                {
                case 0:
                    if(arr[i]=='w')
                        s = 1;
                    else if(arr[i]>='a' && arr[i]<='z')
                        s = 2;
                    else
                        f = 1;
                    break;
                case 1:
                    if(arr[i]=='w')
                        s = 3;
                    else if(arr[i]>='a' && arr[i]<='z')
                        s = 2;
                    else
                        f = 1;
                    break;
                case 2:
                    if(arr[i]>='a' && arr[i]<='z')
                        s = 5;
                    else
                        f = 1;
                    break;
                case 3:
                    if(arr[i]=='w')
                        s = 4;
                    else if(arr[i]>='a' && arr[i]<='z')
                        s = 2;
                    else
                        f = 1;
                    break;
                case 4:
                    if(arr[i]=='.')
                        s = 2;
                    else
                        f = 1;
                    break;
                case 5:
                    if(arr[i]>='a' && arr[i]<='z')
                        s = 5;
                    else if(arr[i]=='.')
                        s = 6;
                    else
                        f = 1;
                    break;
                case 6:
                    if(arr[i]=='c')
                        s = 7;
                    else
                        f = 1;
                    break;
                case 7:
                    if(arr[i]=='o')
                        s = 8;
                    else if(arr[i]=='a')
                        s = 9;
                    else
                        f = 1;
                    break;
                case 8:
                    if(arr[i]=='m')
                        s = 9;
                    else if(arr[i]=='.')
                        s = 6;
                    else
                        f = 1;
                    break;

                }

                cout<<"State "<<s<<endl;
                i++;

            }
            if(f==1)
                cout<<"STRING NOT ACCEPTED !"<<endl;
            else
                cout<<"STRING ACCEPTED !"<<endl;
        }
        else{
            break;
		}
    }

    return 0;
}