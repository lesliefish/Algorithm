package lei.yu.algorithm.book.chapter1;

import java.util.Iterator;

public class LinkedStack<Item> {
    private Node top;
    private int N;

    // 节点
    private class Node {
        Item item;
        Node next;
    }

    public boolean isEmpty() {
        return N == 0;
    }

    public int size() {
        return N;
    }

    public void push(Item item) {
        Node oldItem = top;
        top = new Node();
        top.item = item;
        top.next = oldItem;
        N++;
    }

    public Item pop() {
        Item item = top.item;
        top = top.next;
        N--;

        return item;
    }
}
