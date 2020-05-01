#include <vector>
#include<climits>
class PriorityQueue {
    // Complete this class
    vector <int> pq;
    
    public:
    int getSize(){
        return pq.size();
    }
    bool isEmpty(){
        return getSize()==0;
    }
    int getMax()
    {
        if(pq.size()==0) return INT_MIN;
        
        return pq[0];
    }
    void insert(int element)
    {
        pq.push_back(element);
        int ci=pq.size()-1;
        int pi=(ci-1)/2;
        
        while(pi>=0 && pq[pi]<pq[ci])
        {
           // swap
            int temp=pq[ci];
            pq[ci]=pq[pi];
            pq[pi]=temp;
            
            ci=pi;
            pi=(ci-1)/2;
        }
            
    }
    int removeMax()
    {
        if(isEmpty()) return INT_MIN;
        
        int ans = pq[0];
        
        pq[0]=pq[pq.size()-1];
        
        pq.pop_back();
        
        int i=0;
        while (i<pq.size())
        {
            if(2*i+1 >= pq.size()) break; //absence of left child
            else
            {
                if(2*i+2 >= pq.size()) //no right chiid
                {
                    if(pq[i]<pq[2*i+1])
                    {
                        int temp =pq[i];
                        pq[i]=pq[2*i+1];
                        pq[i]=temp;
                        i=2*i+1;
                    }
                    else break;
                }
                else
                {
                    if(pq[2*i+1]>pq[2*i+2]) //left child is max
                    {
                        int temp =pq[i];
                        pq[i]=pq[2*i+1];
                        pq[2*i+1]=temp;
                        i=2*i+1;
                    }
                    else  //right xhild is max
                    {
                       int temp =pq[i];
                        pq[i]=pq[2*i+2];
                        pq[2*i+2]=temp;
                        i=2*i+2; 
                    }
                }
            }
        }
        
        
        
        return ans;
    }
};
