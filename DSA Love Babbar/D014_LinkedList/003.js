class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

function middle_node_of_LL(head) {
    let slow = head;
    let fast = head;

    while (fast !== null && fast.next !== null) {
        slow = slow.next;
        fast = fast.next.next;
    }

    return slow;
}

// Example usage:
// Create a linked list
let head = new Node(1);
head.next = new Node(2);
head.next.next = new Node(3);
head.next.next.next = new Node(4);
head.next.next.next.next = new Node(5);

// Find the middle node
let middleNode = middle_node_of_LL(head);
console.log("Data of the middle node:", middleNode.data);
