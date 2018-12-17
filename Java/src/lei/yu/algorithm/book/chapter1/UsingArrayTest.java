package lei.yu.algorithm.book.chapter1;

public class UsingArrayTest {
    private int[] array;

    // 构造函数
    public UsingArrayTest() {
        array = new int[10];
        for (int i = 0; i < 10; ++i) {
            array[i] = i;
        }
    }

    // 获取最大值
    public int getMax() {
        int max = array[0];
        for (int i = 1; i < 10; i++) {
            if (array[i] > max) {
                max = array[i];
            }
        }

        return max;
    }

    // 平均值
    public double getAverage() {
        int N = array.length;
        double sum = 0;
        for (int i = 0; i < N; i++) {
            sum += array[i];
        }

        return sum / N;
    }

    // 复制数组
    public void copyArray() {
        int[] b = new int[array.length];
        for (int i = 0; i < array.length; i++) {
            b[i] = array[i];
        }

        System.out.println("copyed array : ");
        for (int i = 0; i < b.length; i++) {
            System.out.print(b[i] + "\t");
        }
        System.out.println();
    }

    // 翻转数组
    public void reverseArray() {
        for (int i = 0; i < array.length / 2; i++) {
            int temp = array[i];
            array[i] = array[array.length - i - 1];
            array[array.length - i - 1] = temp;
        }

        System.out.println("after reverse array : ");
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + "\t");
        }
    }

    // 测试
    public void test() {
        System.out.print(getMax());
        System.out.println();
        System.out.print(getAverage());
        System.out.println();
        copyArray();
        reverseArray();
    }

    public int[] getArray() {
        return array;
    }

    public void setArray(int[] array) {
        this.array = array;
    }
}
