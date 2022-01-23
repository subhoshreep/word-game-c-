#include<bits/stdc++.h>
using namespace std;
int main() {

	
    int k,n;
    
    string a[100000];
    string b;
    
    char t1[100000];
    char ar1[100000];
    
    cout<<"Enter size :";
    cin>>k;
    
    for(int i=0;i<k;i++)
    {
        cout<<"list the words: ";
        cin>>a[i];
        strcpy(t1,a[i].c_str());
        ar1[i]=t1[0];
    }
    
    cin>>b;
    char temp[100000];
    strcpy(temp,b.c_str());
    n=strlen(temp);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(temp[i]==ar1[j])
            {
                cout<<"\n"<<a[j]<<"\n";
            }
            
        }
        
    }
 return 0;   
}