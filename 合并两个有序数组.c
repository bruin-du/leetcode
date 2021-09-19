void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int* p1 = &nums1[m - 1];
    int* p2 = &nums2[n - 1];
    int* tail = &nums1[nums1Size - 1];
    while (n > 0 && m > 0)
    {
        if (*p1 >= *p2)
        {
            *tail = *p1--;
            m--;
        }
        else
        {
            *tail = *p2--;
            n--;
        }
        tail--;
    }
    if (n > 0)
    {
        while (n)
        {
            *tail-- = *p2--;
            n--;
        }
    }
}