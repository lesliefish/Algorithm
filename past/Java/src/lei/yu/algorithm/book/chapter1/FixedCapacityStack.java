package lei.yu.algorithm.book.chapter1;

// 定容栈
public class FixedCapacityStack<Item> {
    private Item[] a;
    private int N;

    public FixedCapacityStack(int capacity) {
        a = (Item[]) new Object[capacity];
    }

    public boolean isEmpty() {
        return N == 0;
    }

    public int size() {
        return N;
    }

    public void push(Item item) {
        if (N == a.length) {
            resize(2 * a.length);
        }
        // 元素压入栈顶
        a[N++] = item;
    }

    public Item pop() {
        Item item = a[N--];
        a[N] = null;
        if (N > 0 && N == a.length / 4) {
            resize(a.length / 2);
        }

        return item;
    }

    // 调整栈的大小
    private void resize(int max) {
        Item[] tempItem = (Item[]) new Object[max];
        for (int i = 0; i < N; i++) {
            tempItem[i] = a[i];
        }
        a = tempItem;
    }
}
