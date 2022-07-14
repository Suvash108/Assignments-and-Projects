#include<bits/stdc++.h>
#include<deque>
#include<unistd.h>
#include<map>
using namespace std;
int main(){
    int stat_no = 5;
    srand(time(NULL));
    deque<int> frame_cn(stat_no, 2);
    deque<int> send_t(stat_no, -1);
    deque<int> frame_n(stat_no, 1);
    bool done = true;
    for(int i = 0; i < stat_no; i++){
        if(frame_cn[i] > 0){
            send_t[i] = (rand()%10)+2;
            sleep(0.5);
            done = false;
        }
    }
    deque<string> channel(stat_no);
    int slot = 0;
    deque<int> collsions;
    int time = 0;
    while(!done){
        done = true;
        string slot_c(stat_no, '-');

        map<int, int> ht;
        for(int i = 0; i < stat_no; i++){
            if(send_t[i] != -1){
                cout<<"Station "<<i+1<<": Sending Frame #"<<frame_n[i]<<" Time: "<<send_t[i]<<"\n";
                time = max(time, send_t[i]);
            }
            ht[send_t[i]]++;
        }
        cout<<"\n";
        for( int  p : ht){
            if(p.second > 1){
                cout<<"Collision at Time: "<<p.first<<"\n";
            }
        }
        for(int i = 0; i < stat_no; i++){
            if(ht[send_t[i]] == 1){
                frame_n[i]++;
            }
            if(frame_n[i] <= frame_cn[i]){
                done = false;
                send_t[i] = (rand()%10)+2;
                sleep(0.5);
            }
        }

    }
    return 0;
}


