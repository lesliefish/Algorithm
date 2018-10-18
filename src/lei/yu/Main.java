package lei.yu;

import lei.yu.algorithm.book.chapter1.BinarySearch;
import lei.yu.algorithm.book.chapter1.CreateStringArrayBySplit;
import lei.yu.algorithm.book.chapter1.ResizingArrayStack;

import java.util.Iterator;

public class Main {

    public static void main(String[] args) {
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
    }
}
