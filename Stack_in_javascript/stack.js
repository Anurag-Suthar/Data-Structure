class Stack {
    constructor() {
        this.items = [];
    }

    // add element to the stack with out use build in function
    add(element) {
        this.items[this.items.length] = element
        return this.items
    }
    removeFromEnd() {
        let lastIndex = this.items.length - 1
        let removeElement = this.items[lastIndex]
        let newArray = []
        for (let i = 0; i < this.items.length - 1; i++) {
            newArray[i] = this.items[i];
        }
        this.items = newArray
        return removeElement
    }
    top() {
        return this.items[0]
    }
    isEmpty() {
        if (this.items === length) {
            return true
        } else {
            false
        }
    }
    sizeOf() {
        return this.items.length
    }
}


const newStack = new Stack;
console.log(newStack.add(1));
console.log(newStack.add(2));
console.log(newStack.add(3));
console.log(newStack.add(3));
console.log(newStack.add(3));
console.log(newStack.add(3));
console.log(newStack.removeFromEnd());
console.log(newStack.items);