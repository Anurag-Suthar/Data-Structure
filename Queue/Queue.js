class Queue {
    constructor() {
        this.queue = []
    }

    // add element to the end of the Queue
    enQueue(element) {
        // unshift is a array method that is add the element to the beginning of the array
        this.queue.unshift(element)
        return this.queue;
    }
    //deQueue method are removing the element from the rear side of the queue 
    deQueue() {
        // pop() method is use to remove the last which is first element of the queue 
        return this.queue.pop()
    }
    showQueue() {
        return this.queue;
    }
    isEmpty() {
        if (this.queue.length == 0) {
            return true
        }
        return false
    }
    isFull() {
        if (this.queue.length > 0) {
            return true
        }
        return false
    }
    peek() {
        return this.queue[this.queue.length - 1]
    }
}


let newQueue = new Queue;
console.log(newQueue.enQueue(1));
console.log(newQueue.enQueue(2));
// console.log(newQueue.deQueue());
console.log(newQueue.showQueue());
console.log(newQueue.peek());
console.log(newQueue.showQueue());
