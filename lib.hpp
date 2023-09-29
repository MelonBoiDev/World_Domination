#ifndef __LIB_HPP__
#define __LIB_HPP__

/**
 * Partition the array using the compare function
 * 
 * @param arr - The array to partition
 * @param low - The starting index of the section to be partitioned
 * @param high - The ending index of the section to be partitioned
 * @param compare - The comparison function to determine the order
 * 
 * @return The index of the pivot element after partitioning
 */
template <typename T, typename Compare>
int partition(T arr[], int low, int high, Compare compare) {
    T pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (compare(arr[j], pivot)) { // Use the compare function
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

/**
 * quickSort algorithm on the array using the compare function.
 * 
 * @param arr - The array to be sorted
 * @param low - The starting index of the section to be sorted
 * @param high - The ending index of the section to be sorted
 * @param compare - The comparison function to determine the order
 */
template <typename T, typename Compare>
void quickSort(T arr[], int low, int high, Compare compare) {
    if (low < high) {
        int pi = partition(arr, low, high, compare);
        quickSort(arr, low, pi - 1, compare);
        quickSort(arr, pi + 1, high, compare);
    }
}



#endif