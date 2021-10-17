
void miniMaxSum(vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    long sum_min = 0;
    long sum_max = 0;

    for (size_t i = 0; i < arr.size(); i++)
    {
        if (i == arr.size() - 1)
            break;
        sum_max += arr[i + 1];
        if (i <= 3)
            sum_min += arr[i];
    }
    std::cout << sum_min << " " << sum_max << std::endl;
}
