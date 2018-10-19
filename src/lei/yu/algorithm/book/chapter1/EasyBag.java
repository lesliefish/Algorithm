package lei.yu.algorithm.book.chapter1;

import java.util.Iterator;

public class EasyBag<Item> {
    private Node first;
    private int size;

    public int size() {
        return size;
    }

    public boolean isEmpty() {
        return size == 0;
    }

    private class Node {
        Item item;
        Node next;
    }

    public void add(Item item) {
        Node newNode = new Node();
        newNode.item = item;
        newNode.next = first;

        first = newNode;
    }

    public Iterator<Item> iterator() {
        return new ListIterator();
    }

    private class ListIterator implements Iterator<Item> {
        private Node cur = first;

        @Override
        public boolean hasNext() {
            return cur != null;
        }

        @Override
        public Item next() {
            Item item = cur.item;
            cur = cur.next;

            return item;
        }
    }
}

/*
测试代码：
        EasyBag<String> easyBag = new EasyBag<String>();
        easyBag.add("1");
        easyBag.add("2");
        easyBag.add("3");
        easyBag.add("4");
        easyBag.add("5");
        easyBag.add("6");
        easyBag.add("7");

        Iterator<String> iter = easyBag.iterator();
        while (iter.hasNext()){
            System.out.println(iter.next());
        }

*/