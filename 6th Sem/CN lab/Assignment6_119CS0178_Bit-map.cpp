#include<bits/stdc++.h>

using namespace std;

void contention(vector<int> &senders)
{
    for(int i = 0; i <senders.size(); i++)
    {
        senders[i] = rand() % 2;
    }
}

void displayInterestedSenders(vector<int> senders)
{
    cout<<"\nThe stations having frame to transmit are: ";
    
    for(int i = 0; i <senders.size(); i++)
    {
        if(senders[i] == 1)
        {
            cout<<i + 1<<" ";
        }
    }
    cout<<endl;
}

void sendFrames(vector<int> senders)
{
    for(int i = 0; i <senders.size(); i++)
    {
        if(senders[i] == 1)
        {
            cout<<"Station "<<i + 1<<" is sending frame\n";
        }
    }
}

int main()
{
    srand(time(NULL));
    
    int n;
    cout<<"Enter the number of stations: ";
    cin>>n;

    int t;
    cout<<"Enter the number of contention periods: ";
    cin>>t;

    vector<int> senders(n);

    for(int i = 0; i < t; i++)
    {
        contention(senders);
        displayInterestedSenders(senders);
        sendFrames(senders);
    }

    return 0;
}