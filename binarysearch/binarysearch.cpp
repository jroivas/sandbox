int binsearch(unsigned int val, int min, int max, unsigned int arr[])
{
    if (arr == nullptr) return -2;
    if (max < 0 || min < 0) return -2;
    if (min > max) return -2;
    if (max == 0) return arr[0] == val ? 0 : -1;
    if (min == max) return arr[min] == val ? min : -1;

    unsigned int half = min + ((max-min)/2);

    if (arr[half] == val) return half;
    if (arr[min] == val) return min;
    if (arr[max] == val) return max;
    if (half == min || half == max) return -1;

    if (val < arr[half]) {
        return binsearch(val, min, half, arr);
    } else {
        return binsearch(val, half, max, arr);
    }
}
