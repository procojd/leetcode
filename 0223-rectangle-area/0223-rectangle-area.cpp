class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
      int l1,l2,l3,b1,b2,b3;
        l1=abs(ay2-ay1);
        l2=abs(by2-by1);
        b1=abs(ax2-ax1);
        b2=abs(bx2-bx1);
        
        int a1,a2;
        a1=l1*b1;
        a2=l2*b2;
         int xOverlap = min(ax2, bx2) - max(ax1, bx1);
        int yOverlap = min(ay2, by2) - max(ay1, by1);
        int areaOverlap = (xOverlap > 0 && yOverlap > 0) ? xOverlap * yOverlap : 0;
        return (a1+a2-areaOverlap);
    }
};