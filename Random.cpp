// Checking the array is sorted or not
bool isValid()
{
    return is_sorted(values.begin(), values.end(), [](const int& a, const int& b) {return a <= b; });
}

