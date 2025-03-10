int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoid potential overflow

        if (arr[mid] == target) {
            return mid;  // Target found at index mid
        }
        else if (arr[mid] < target) {
            low = mid + 1;  // Search in the right half
        }
        else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Target not found
}
