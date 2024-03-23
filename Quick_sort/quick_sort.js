function quickSort(arr, low = 0, high = arr.length - 1) {
    if (low < high) {
        const pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);  // Sort left sub-array
        quickSort(arr, pivotIndex + 1, high); // Sort right sub-array
    }
    return arr;
}

function partition(arr, low, high) {
    const pivot = arr[high]; // Choose the last element as the pivot (can be optimized)
    let i = low - 1;

    for (let j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            [arr[i], arr[j]] = [arr[j], arr[i]]; // Swap elements
        }
    }

    [arr[i + 1], arr[high]] = [arr[high], arr[i + 1]]; // Put the pivot in its final position
    return i + 1;
}

// Example usage:
const numbers = [3, 8, 1, 4, 2, 6, 7, 5];
const sortedNumbers = quickSort(numbers);
console.log(sortedNumbers); // Output: [1, 2, 3, 4, 5, 6, 7, 8]
