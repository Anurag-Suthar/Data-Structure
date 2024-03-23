//define maximum and minimum keys for each node
const MAX_KEYS = 3;
const MIN_KEYS = 2;


// Node class for B Tree
class Node {
    constructor(leaf) {
        this.keys = [];
        this.children = [];
        this.numKeys = 0;
        this.leaf = leaf;

    }
}
//B Tree class
class BTree {
    constructor() {
        this.root = null;
    }

     splitChild(parent, index) {
        const child = parent.children[index];
        const newChild = new Node(child.leaf);


        //move the middle key of child to parent
        for (let i = MAX_KEYS; i < MAX_KEYS; i++) {
            newChild.keys.push(child.keys[i]);
        }
        parent.keys.splice(index, 0, child.keys[MIN_KEYS - 1]);
        parent.numKeys++;
        child.keys.splice(MIN_KEYS - 1, MAX_KEYS - MIN_KEYS + 1);
        child.numKeys = MIN_KEYS - 1;
    }

    //insertion function
    insert(key) {
        if (!this.root) {
            this.root = new Node(true);
            this.root.keys.push(key);
            this.root.numKeys++;
        } else {
            if (this.root.numKeys === MAX_KEYS) {
                const newRoot = new Node(false);
                newRoot.children.push(this.root);
                this.splitChild(newRoot, 0);
                this.root.numKeys++;
            }


        }
    }
}




const btree = new BTree();
btree.insert(10);


