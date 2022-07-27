class MinStack {
public:
    int minIdx;
    int topa;
    pair<int, int> *arr;
    int size;
    
    MinStack() {
        minIdx = 1;
        topa = -1;
        arr = new pair<int, int>[100000];
        size = 100000;
    }
    
    void push(int val) {
        if (topa + 1 < 100000)
        {
            topa++;
            arr[topa] = {val, minIdx};
            if (topa == 0)
                minIdx = 0;
            else
            {
                if (arr[minIdx].first > val)
                    minIdx = topa;
            }
        }
    }
    
    void pop() {
        if (topa != -1)
        {
            if (topa == minIdx)
            {
                minIdx = arr[topa].second;
            }
            topa--;
        }
    }
    
    int top() {
        if (topa != -1)
            return arr[topa].first;
        return -1;
    }
    
    int getMin() {
        if (minIdx != -1)
            return arr[minIdx].first;
        return -1;
    }
};
