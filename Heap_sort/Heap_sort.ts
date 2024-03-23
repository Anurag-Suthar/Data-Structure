
 
function heapify(arr:number[],n:number,i:number){
    let largest:number = i;
    const left:number =  2*i+1;
    const right:number =  2*i+2;

    if(left<n && arr[left] > arr[largest]){
        largest = left
    }
    if(right<n && arr[right]>arr[largest]){
        largest = right
    }
     // Swap and continue heapifying if root is not largest
     if(largest!=i){
        // swap(arr[i],arr[largest]);
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify(arr,n,largest);
     }
}

function swap(a:number,b:number){
    a = a+b;
    b =  a- b;
    a = a - b;
    // return {a,b}
}
function heapSort(arr:number[],n:number){
        //build max heap
        for(let i:number = n/2-1;i>=0;i--){
            heapify(arr,n,i);
        }

        //heap sort 
        for(let i :number = n-1;i>=0;i--){
            // swap(arr[0],arr[i])
            arr[0], arr[i] = arr[i], arr[0]
            heapify(arr,i,0);
        }
}
function printArray(arr:number[]){
    arr.map((ele)=>{
        console.log(ele);
        
    })
}



console.log(swap(1,2));
const arr:number[] = [1,12,55,74,33,22,2];
const n:number = arr.length-1;

heapSort(arr,n)
console.log("Sorted Array is \n");
printArray(arr)