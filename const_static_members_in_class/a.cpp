#include <bits/stdc++.h>
using namespace std;

struct Request{
    private:
        bool possible;
        int volume;
    public:
        Request(bool p, int v) : possible(p), volume(v) {};
        int  getVolume () { return volume; }
        int  getVolume () const { return volume; }
        bool getPossible(){ return possible; }
};

class LeakyBucket{
    private:
        static const int threshold;
        const int non_static_threshold;
        static const Request r;
    public:
        //LeakyBucket(int t,bool p,int v) :  threshold(t), r(p,v) {
        //}
        //LeakyBucket() :  threshold(10), r(false,30) {
        //}
        LeakyBucket() : non_static_threshold(20){
        }
        int getThreshold(){
            return threshold;
        }
        int getDefaultVolume(){
            return r.getVolume();
        }
};

const int LeakyBucket::threshold = 10;
const Request LeakyBucket::r = {false,30};

int main(){
    LeakyBucket l;
    //LeakyBucket l(110,true,130);
    cout<<l.getThreshold()<<endl;
    cout<<l.getDefaultVolume()<<endl;
    return 0;
}

