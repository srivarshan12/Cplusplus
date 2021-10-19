#include<bits/stdc++.h>
using namespace std;

void freq(string str)
{
    string word;
    map<string , int>fc;
    stringstream ss(str);
    while(ss >> word)
    {
        fc[word]=fc[word]+1;
    }
    map<string , int>::iterator i;
    for(i=fc.begin(); i!=fc.end(); i++)
    {
        cout<<(*i).first<<": "<<(*i).second<<endl;
    }
    
}


int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    freq(str);
}
