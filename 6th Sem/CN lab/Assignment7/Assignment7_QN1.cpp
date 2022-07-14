#include<bits/stdc++.h>

using namespace std;

struct packet{
    int counter;

    packet(int c)
    {
        counter = c;
    }
};

void display(vector<int> &pkt, int t)
{
    cout<<"Number of packets at each node at t="<<t<<endl;
    cout<<"Nodes:\t";
    for(int i = 0; i < 7; i++)
    {
        cout<<i<<"\t";
    }
    cout<<endl<<"Packet:\t";

    for(int n: pkt)
    {
        cout<<n<<"\t";
    }
    cout<<endl<<endl;
}

void displayGraph(vector<vector<int>> &graph)
{
    cout<<"The adjacency matrix of network graph is:"<<endl<<endl;

    cout<<"\t";
    for(int i = 0; i < 7; i++)
    {
        cout<<i<<"\t";
    }
    cout<<endl;

    for(int i = 0; i < 7; i++)
    {
        cout<<i<<"\t";
        for(int j = 0; j < 7; j++)
        {
            cout<<graph[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

void transmitNeighbour(vector<vector<packet>> &currentStatus, vector<vector<int>> graph, int ind, int n)
{
    for(int i = 0; i < n; i++)
    {
        packet temp = currentStatus[ind][i];
        temp.counter--;
        for(int j = 0; j < 7; j++)
        {
            if(graph[ind][j] == 1)
            {
                currentStatus[j].push_back(temp);
            }
        }
    }

    auto itr1 = currentStatus[ind].begin();
    currentStatus[ind].erase(itr1, itr1 + n);
}

int main()
{
    vector<vector<int>> networkGraph = {{0, 1, 1, 1, 0, 0, 0},
                                        {1, 0, 1, 0, 1, 0, 0},
                                        {1, 1, 0, 1, 0, 1, 0},
                                        {1, 0, 1, 0, 0, 1, 0},
                                        {0, 1, 0, 0, 0, 1, 1},
                                        {0, 0, 1, 1, 1, 0, 1},
                                        {0, 0, 0, 0, 1, 1, 0}};

    displayGraph(networkGraph);

    int source, destination;

    cout<<"Enter the source node: ";
    cin>>source;
    cout<<"Enter the destination node: ";
    cin>>destination;

    int life, time = 1;
    cout<<"Enter the counter value(lifetime of a packet): ";
    cin>>life;
    cout<<endl;

    vector<vector<packet>> currentStatus(7);
    vector<int> packetsNode(7, 0);

    packet *p = new packet(life);
    currentStatus[source].push_back(*p);

    while(packetsNode[destination] == 0)
    {
        for(int i = 0; i < 7; i++)
        {
            packetsNode[i] = currentStatus[i].size();
        }

        display(packetsNode, time);

        for(int i = 0; i < 7; i++)
        {
            if(packetsNode[i] != 0)
            {
                transmitNeighbour(currentStatus, networkGraph, i, packetsNode[i]);
            }
        }

        time++;
    }

    cout<<"Packet reached its destination"<<endl;

    return 0;
}
