#include<iostream>
#include<deque>
#include<unistd.h>
using namespace std;

int main(){
    int stat_no = 5;
    deque<int> frame_no(stat_no, 2);
    deque<int> del_t(stat_no, -1), frameNum(stat_no, 1);
    bool done = true;
    srand(time(NULL));
    for(int i = 0; i < stat_no; i++){
        if(frame_no[i] > 0){
            

            del_t[i] = (rand()%10)+2;
            sleep(0.5);
            //cout<<del_t[i]<<endl;
            done = false;
            
        }
    } 
    deque<string> channel(stat_no);
    int slot = 0;
    deque<int> collsions;
    while(!done){
        done = true;
        string slot0(stat_no, '-');

        int senderCnt = 0;
        for(int i = 0; i < stat_no; i++){
            if(del_t[i] == 0){
                slot0[i] = '0' + frameNum[i];
                senderCnt++;
                done = false;
            }
            channel[i].push_back(slot0[i]);
        }

        if(senderCnt > 1){
            collsions.push_back(slot);
        }
        for(int i = 0; i < stat_no; i++){
            if(senderCnt > 1 && del_t[i] == 0){
                
               del_t[i] = (rand()%100)+2;
               sleep(0.5);
            }
            else if(del_t[i] == 0){
                frameNum[i]++;
                if(frameNum[i] <= frame_no[i]){
                    
                    del_t[i] = (rand()%100)+2;
                    sleep(0.5);
                }
                else{
                    del_t[i] = -1;
                }
            }
            else if(del_t[i] > 0){
                del_t[i]--;
                done = false;
            }
        }
        slot++;
    }
    cout<<"Channel information:-\n";
    for(int i = 0; i < stat_no; i++){
        cout<<"Station : "<<i+1<<"\t"<<channel[i]<<"\n";
    }
    cout<<"Number of Collsion: "<<collsions.size()<<"\n";
    cout<<"Collision occured at slot: ";
    for(int i = 0; i < collsions.size(); i++){
        cout<<collsions[i];
        if(i < collsions.size()-1){
            cout<<", ";
        }
        else{
            cout<<"\n";
        }
    }
    return 0;
}


