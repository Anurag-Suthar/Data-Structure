
const unsortedArray = [9, 5, 7, 1, 2, 4];


function insertionSort(arr) {
    for (let step = 1; step < arr.length; step++) {
        const key = arr[step];
        let j = step - 1;

        while (key < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
    printArray(arr)
}

function printArray(arr) {
    for (let i = 0; i < arr.length; i++) {
        console.log(arr[i]);
    }
}


insertionSort(unsortedArray);
console.log("Sorted Array is ascending order is ..");
// printArray(unsortedArray)
