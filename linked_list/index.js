class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}


class LinkedList {
    constructor() {
        this.head = null;
        this.size = 0;
    }
    add(data) {
        const newNode = new Node(data);
        if (!this.head) {
            this.head = newNode;//if the linked list is empty, then set the new node as the head
        } else {
            let current = this.head;
            // console.log(current.next)
            while (current.next) {
                current = current.next;
            }
            current.next = newNode;
        }
        this.size++;
    }
    display() {
        let current = this.head;
        let result = '';
        while (current !== null) {
            result += current.data + ' ';
            current = current.next;
        }
        console.log(result.trim()); // Trim to remove trailing whitespace
    }
    isEmpty() {
        if (!this.head) {
            console.log("no element");
            return true;
        }
    }
    isFull() {
        if (this.head) {
            console.log("have element");
            return true;
        }
    }

}

list = new LinkedList()
list.add(1)
list.add(2)
list.add(3)
list.display();
list.isEmpty();
list.isFull();