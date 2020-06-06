#include <queue>

void reverseQueue(queue<int> &q) {
	// Write your code here
    if(q.size()<=0)
        return;
    
    int x=q.front();
    q.pop();
    reverseQueue(q);
    
    q.push(x);
    
}
