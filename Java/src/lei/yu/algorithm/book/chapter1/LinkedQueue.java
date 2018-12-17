package lei.yu.algorithm.book.chapter1;

public class LinkedQueue<Item> {
    private Node head;
    private Node tail;
    private int N;

    private class Node {
        Item item;
        Node next;
    }

    public boolean isEmpty() {
        return head == null;
    }

    public int size() {
        return N;
    }

    // 入队
    public void enqueue(Item item) {
        Node oldNode = tail;
        tail = new Node();
        tail.item = item;
        tail.next = null;
        if (isEmpty()) {
            head = tail;
        } else {
            oldNode.next = tail;
        }
        N++;
    }

    // 出队
    public Item dequeue() {
        Item item = head.item;
        head = head.next;
        if (isEmpty()) {
            tail = null;
        }
        N--;

        return item;
    }
}
