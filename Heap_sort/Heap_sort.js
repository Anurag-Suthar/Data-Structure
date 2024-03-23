function heapify(arr, n, i) {
    var largest = i;
    var left = 2 * i + 1;
    var right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
        // swap(arr[i],arr[largest]);
        arr[i], arr[largest] = arr[largest], arr[i];
        heapify(arr, n, largest);
    }
}
function swap(a, b) {
    a = a + b;
    b = a - b;
    a = a - b;
    // return {a,b}
}
function heapSort(arr, n) {
    //build max heap
    for (var i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    //heap sort 
    for (var i = n - 1; i >= 0; i--) {
        // swap(arr[0],arr[i])
        arr[0], arr[i] = arr[i], arr[0];
        heapify(arr, i, 0);
    }
}
function printArray(arr) {
    arr.map(function (ele) {
        console.log(ele);
    });
}
console.log(swap(1, 2));
var arr = [1, 12, 55, 74, 33, 22, 2];
var n = arr.length - 1;
heapSort(arr, n);
console.log("Sorted Array is \n");
printArray(arr);
