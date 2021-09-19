void Swap(int arr[], int left, int right)
{
    while (left < right)
    {
        arr[left] ^= arr[right];
        arr[right] ^= arr[left];
        arr[left] ^= arr[right];
        left++;
        right--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    if (k >= numsSize)
        k = k % numsSize;
    Swap(nums, 0, numsSize - k - 1);
    Swap(nums, numsSize - k, numsSize - 1);
    Swap(nums, 0, numsSize - 1);
}