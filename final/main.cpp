#include <iostream>
#include <cstring>


#define STD 2 //with ass =5
using namespace std;
//Task 1:
// using CString:
int main()
{
    char fname[STD][10],lname[STD][10],fullname[STD][10],maxName[STD];
    for (int i=0;i<STD;i++)
    {
        cout <<" enter 1st name and then last name" << endl;
        cin>> fname[i];
        cin>> lname[i];
        strcpy(fullname[i],fname[i]);
        strcat(fullname[i]," ");
        strcat(fullname[i],lname[i]);
        cout << fullname[i] << endl;
    }
    //max name:
    for(int i=1;i<STD;i++)
    {
       strcpy(maxName,fullname[0]);
       if(strlen(fullname[i])>strlen(maxName)){
        strcpy(maxName,fullname[i]);
        cout<< "\n the max name is " << maxName <<" with order: " << i+1 << endl;
       }
    }
    return 0;
}
