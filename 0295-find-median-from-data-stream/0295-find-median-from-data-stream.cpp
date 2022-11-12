class MedianFinder {
private:
    priority_queue<int>maxh;
    priority_queue<int,std::vector<int>,std::greater<int>>minh;

public: 
    MedianFinder() {
        
    }
    
   void addNum(int num) {
       if(maxh.empty()||maxh.top()>num)maxh.push(num);
       else 
       minh.push(num);
        
        
        if(maxh.size()>minh.size()+1)
        {
            minh.push(maxh.top());
            maxh.pop();
        }
        if(maxh.size()+1<minh.size())
        {
            maxh.push(minh.top());
            minh.pop();
        }
    }
    
   double findMedian() {
       if(maxh.size()==minh.size())
           return ((maxh.top()+minh.top())/2.0);
        else {
            if(maxh.size()>minh.size())
                return maxh.top();
            return minh.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */