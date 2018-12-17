package lei.yu.algorithm.book.chapter1;

import java.util.Iterator;

public class ResizingArrayStack<Item> {

    private Item[] a = (Item[]) new Object[1];
    private int N = 0;              // 元素个数

    public boolean isEmpty() {
        return N == 0;
    }

    public int size() {
        return N;
    }

    private void resize(int max) {
        Item[] temp = (Item[]) new Object[max];
        for (int i = 0; i < N; i++) {
            temp[i] = a[i];
        }
        a = temp;
    }

    public void push(Item item) {
        if (N == a.length) {
            // 放不下了 需要新空间
            resize(a.length * 2);
        }
        a[N++] = item;
    }

    public Item pop() {
        Item item = a[--N];
        a[N] = null; // 避免游离
        if (N > 0 && N == a.length / 4) {
            resize(a.length / 2);     // 缩小数组空间
        }

        return item;
    }

    public Iterator<Item> iterator() {
        return new ReverseArrayIterator();
    }

    // 逆序迭代
    public class ReverseArrayIterator implements Iterator<Item> {
        private int i = N;

        @Override
        public void remove() {
            // 暂不实现
            return;
        }

        @Override
        public Item next() {
            return a[--i];
        }

        @Override
        public boolean hasNext() {
            return i > 0;
        }
    }
}
/*
test code
        ResizingArrayStack<String> resizingArrayStack = new ResizingArrayStack<String>();
        resizingArrayStack.push("111");
        resizingArrayStack.push("222");
        resizingArrayStack.push("333");
        resizingArrayStack.push("444");
        resizingArrayStack.push("555");

        Iterator<String> iter = resizingArrayStack.iterator();
        System.out.println(resizingArrayStack.size());
        while (iter.hasNext()) {
            System.out.println(iter.next());
        }
*/