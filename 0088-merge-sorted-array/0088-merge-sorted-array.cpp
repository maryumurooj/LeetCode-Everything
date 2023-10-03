class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0,k=0;
        int nums3[m+n];

        while(k<(m+n))
        {
            while((i<m)&&(j<n))
            {
                if(nums1[i]<=nums2[j])
                nums3[k++]=nums1[i++];
                else if(nums1[i]>nums2[j])
                nums3[k++]=nums2[j++];
            }

            if(i<m)
            {
                nums3[k++]=nums1[i++];
            }

            if(j<n)
            {
                nums3[k++]=nums2[j++];
            }
        }

        for(int l=0;l<m+n;l++)
        {
            nums1[l]=nums3[l];
        }



    }
};