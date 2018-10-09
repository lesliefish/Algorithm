package lei.yu.algorithm.book.chapter1;

// 二分查找
public class BinarySearch {

    public static int getPosition(int x, int[] array) {

        int low = 0;
        int high = array.length - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (array[mid] == x) {
                return mid;
            } else if (array[mid] > x) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return -1;
    }

    public static void test() {

        int[] a = {1, 2, 4, 5, 6, 7, 8, 12, 24, 55, 67};

        int[] testValues = {0, 1, 8, 55, 67};
        for (int i = 0; i < testValues.length; i++) {
            int x = testValues[i];
            int pos = getPosition(x, a);
            System.out.println(x + "'s pos is " + pos);
        }

    }
}
