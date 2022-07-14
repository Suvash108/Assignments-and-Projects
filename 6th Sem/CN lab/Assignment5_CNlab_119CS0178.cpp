#include<bits/stdc++.h>
using namespace std;
float G;
void Pure_Aloha(){
    cout<<"\nPure Aloha Simulation\n";
    G=0.0;
    while(G<3){

        cout<<"P("<<G<<")---"<<G*exp(-2*G)<<endl;
        G+=0.25;
    }
    cout<<" P indicates normalised throughput.\n";
    cout<<"Simulation has maximum value when G is 0.5 that is of 18.394%.\n";
}
void Slotted_Aloha(){
    cout<<"\nSlotted Aloha Simulation\n";
    G=0.0;
    while(G<3){

        cout<<"S("<<G<<")---"<<G*exp(-G)<<endl;
        G+=0.25;  //to take consecutive points
    }
    cout<<" S indicates normalised throughput.\n";
    cout<<"Simulation has maximum value when G is 1.0 that is of 36.788%.\n";
}

int main()
{

        Pure_Aloha(); //  call Pure_Aloha function 

        Slotted_Aloha(); // call Slotted_Aloha Function
        

}

