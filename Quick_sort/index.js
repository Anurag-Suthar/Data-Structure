function swap(a, b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

function printArray(arr) {
    // for (let i = 0; i <= arr.length; i++) {
    //     console.log(arr[i]);
    // }
    arr.forEach(element => {
        console.log(element);
    });
};

function partition(arr, low, high) {

    //select the rightmost element as pivot
    let pivot = arr[high];

    //pointer for  grater then
    let i = (low - 1);

    for (let j = low; j < high; j++) {
        if (arr[j] <= pivot) {

            //if element smaller than pilot is found 
            //swap it with the greater element pointed by 1 

            i++
            //swap the element i with element j 
            swap(arr[i], arr[j])
        }
    }
    // swap pivot with the grater element at j 
    swap(arr[i + 1], arr[high])

    return (i + 1);
}

function quickSort(arr, low, high) {
    if (low < high) {
        // find the pivot element such that
        // elements smaller than pivot are on left of pivot
        // elements greater than pivot are on righ of pivot
        let pi = partition(arr, low, high)

        //recursive call on the left of pivot 

        quickSort(arr, low, pi - 1),

            //recursive call on the right of pivot

            quickSort(arr, pi + 1, high)
    }
    return arr;
}

function main() {
    const data = [8, 7, 6, 0, 1, 5, 9];
    let low = 0;
    let high = data.length - 1;
    console.log("Un sorted array");
    printArray(data)

    let sortedArray = quickSort(data, low, high)

    console.log("Sorted array in ascending order :\n");
    printArray(sortedArray)
}
main()