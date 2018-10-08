package lei.yu.algorithm.book.chapter1;

public class UsingArrayTest {
    private int[] intArray;

    public  UsingArrayTest() {
        intArray = new int[10];
        for (int i = 0; i < 10; ++i) {
            intArray[i] = i;
        }
    }

    // get max 获取最大值
    public int getMax() {
        int max = intArray[0];
        for (int i = 1; i < 10; i++) {
            if (intArray[i] > max) {
                max = intArray[i];
            }
        }

        return max;
    }

    public int[] getIntArray() {
        return intArray;
    }

    public void setIntArray(int[] intArray) {
        this.intArray = intArray;
    }
}
