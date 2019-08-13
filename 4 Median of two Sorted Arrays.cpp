class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    int start = 0;
    int end;
    int partX;
    int partY;
    int xSize;
    int ySize;
    int maxLeftX;
    int maxLeftY;
    int minRightY;
    int minRightX;
    vector<int> y;
    vector<int> x;

    if( m > n)
    {
        y = nums1;
        ySize = nums1.size();
        x = nums2;
        xSize = nums2.size();
        end = n;
    }
    else
    {
        x = nums1;
        xSize = nums1.size();
        y = nums2;
        ySize = nums2.size();
        end = m;
    }
    while(start <= end)
    {
         partX = (start + end)/2;
         partY = (n + m + 1)/2 - partX;

         if(partX == 0){maxLeftX = INT_MIN;}
         else{maxLeftX = x[partX - 1];}

         if(partX == xSize ){minRightX = INT_MAX;}
         else{minRightX = x[partX];}

         if(partY == 0){maxLeftY = INT_MIN;}
         else{maxLeftY = y[partY - 1];}

         if(partY == ySize ){minRightY = INT_MAX;}
         else{minRightY = y[partY];}

         if(maxLeftX <= minRightY && maxLeftY <= minRightX)
         {
             if((n + m)% 2 == 0)
             {
                 return ((double)max(maxLeftX, maxLeftY) + min(minRightX, minRightY))/2;
             }
             else
             {
                 return(double)max(maxLeftX, maxLeftY);
             }
         }
         else if (maxLeftX > minRightY)
         {
             end = partX - 1;
         }
         else
         {
             start = partX + 1;
         }

    }
       return 0.0; 
    }
};