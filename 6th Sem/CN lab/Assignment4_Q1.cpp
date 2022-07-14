//Suvash Chandra Yadav, 119CS0178
#include<bits/stdc++.h>
#include<ctime>
#include<cstdlib>

using namespace std;
//sends message to send the frame 
void sends(int k, int m, int windsize, int framenumbers) 
{
    for(int j = k; j < m + windsize && j <= framenumbers; j++)
    {
        cout<<"Sent Frame: "<<j<<endl;
    }

    cout<<endl;
}
//incase if aknowledgement is missed, resend fuction does the job.
void resend(int m)
{
    cout<<"Retransmitting Frame "<<m<<endl;
}
 //Aknowlgement funcion
int receiveAck(int m, int windsize, int framenumbers)
{
    int k = 0;

    for(int j = m; j < m + windsize && j <= framenumbers; j++)
    {
        k++;        
        int ack = rand() % 2;

        if(ack == 1)
        {
            cout<<"Acknowledgment received for frame "<<j<<endl;
        }
        else
        {
            cout<<"Acknowledgement not received for frame "<<j<<endl;
            resend(j);
            break;
        }
    }
    
    cout<<endl;

    return k;
}

int main()
{
    int framenumbers, windsize;
    srand(time(NULL)); // Random function

    cout<<"Input framenumber to be sent: ";
    cin>>framenumbers;

    cout<<"\nInput the Size of Window: ";
    cin>>windsize;

    cout<<endl;

    int m = 1, k = 1;
    while(m <= framenumbers)
    {
        sends(k, m, windsize, framenumbers);

        k = m + windsize;
        
        m += receiveAck(m, windsize, framenumbers);
    }

    return 0;
}
