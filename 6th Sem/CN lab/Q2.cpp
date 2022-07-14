#include<bits/stdc++.h>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    int frameno, wsize;
    srand(time(NULL));

    cout<<"Input the number of frames: ";
    cin>>frameno;

    cout<<"\n Input the size of window: ";
    cin>>wsize;

    cout<<endl;

    int i = 1;
    while(i <= frameno)
    {
        int received = 0;
        for(int j = i; j < i + wsize && j <= frameno; j++)
        {
            cout<<"Frames Sent: "<<j<<endl;
        }

        cout<<endl;
        for(int j = i;j < i + wsize && j <= frameno; j++)
        {
            int ack = rand() % 2;
            if(ack == 1)
            {
                cout<<"Acknowledgment from frame "<<j<<endl;
                received++;
            }
            else
            {
                cout<<"Acknowledgement for frame "<<j<<" not received"<<endl;
                cout<<"\nRetransmitted Frames"<<endl;
                break;
            }
        }
        cout<<endl;
        i += received;
    }

    return 0;
}
