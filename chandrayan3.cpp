#include <bits/stdc++.h>
using namespace std;

class incubyte{

    

public:
int x,y,z;
char D ,D1;

void commandf(){
   
    if(D1=='N') y++;
    else if(D1=='S') y--;
    else if(D1=='W') x--;
    else if(D1=='E') x++;
    else z++;
        
       
    
}

void commandb(){
     if(D1=='N') y--;
    else if(D1=='S') y++;
    else if(D1=='W') x++;
    else if(D1=='E') x--;
    else z--;
}

void commandl(){
    if(D1=='N') D1='W';
    else if(D1=='S') D1 = 'E';
    else if(D1=='W') D1 ='S';
    else if(D1=='E') D1='N';
    else{
        if(D=='N') D1='W';
        else if(D=='S') D1 = 'E';
        else if(D=='W') D1 ='S';
        else if(D=='E') D1='N';
    }
}

void commandr(){
    if(D1=='N') D1='E';
    else if(D1=='S') D1 = 'W';
    else if(D1=='W') D1 ='N';
    else if(D1=='E') D1='S';
    else{
        if(D=='N') D1='E';
        else if(D=='S') D1 = 'W';
        else if(D=='W') D1 ='N';
        else if(D=='E') D1='S';
    }
}

void commandu(){
     if(D1!='U' && D1!='D'){
            D = D1;
        }
        D1 = 'U';
}

void commandd(){
    if(D1!='U' && D1!='D'){
            D = D1;
        }
        D1 = 'D';
}
};
int main()
{
    incubyte obj;
    //char D,D1;
    obj.D = 'N';
    cout<<"Enter the Initial Cordinates"<<endl;
    cin>>obj.x>>obj.y>>obj.z;
    cout<<"Enter the initial Direction in capitals like (N,S,E,W) : ";
    cin>>obj.D1;
    
    
    if(obj.D1!='U' && obj.D1!='D') obj.D = obj.D1;
    
    vector<char>commands;
    cout<<"Enter the command like (f,b,l,r,u,d) , Enter 1 to stop : ";
    char a;
    while(a!='1'){
        cin>>a;
        commands.push_back(a);
    }

    
    for(int i=0;i<commands.size();i++){
        if(commands[i]=='f') obj.commandf();
        if(commands[i]=='b') obj.commandb();
        if(commands[i]=='l') obj.commandl();
        if(commands[i]=='r') obj.commandr();
        if(commands[i]=='u') obj.commandu();
        if(commands[i]=='d') obj.commandd();
    }
        
        
    cout<<"New Cordinates are : ("<<obj.x<<" ,"<<obj.y<<" ,"<<obj.z<<")"<<endl;

    cout<<"New Direction is : "<<obj.D1<<endl;
       
    
    return 0;
}
