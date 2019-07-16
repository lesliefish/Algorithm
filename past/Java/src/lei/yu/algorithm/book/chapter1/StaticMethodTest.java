package lei.yu.algorithm.book.chapter1;

public class StaticMethodTest {
    // int绝对值
    public static int abs(int x) {
        return x < 0 ? -x : x;
    }

    public static double abs(double x) {
        if (x < 0.0) return -x;
        else return x;
    }

    public static boolean isPrime(int N) {
        if (N < 2)
            return false;
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0)
                return false;
        }
        return true;
    }

    // 计算平方根
    public static double sqrt(double c) {
        if (c < 0)
            return Double.NaN;
        double t = c;
        double err = 1e-15;
        while (Math.abs(t - c / t) > err * t) {
            t = (c / t + t) / 2.0;
        }

        return t;
    }

    // 直角三角形斜边长度
    public static double hypotenuse(double a, double b) {
        return Math.sqrt(a * a + b * b);
    }
}
