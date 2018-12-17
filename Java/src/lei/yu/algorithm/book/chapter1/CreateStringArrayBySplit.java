package lei.yu.algorithm.book.chapter1;

public class CreateStringArrayBySplit {

    public static String[] getBySplit(String str, String splitStr){
        return str.split(splitStr);
    };

    public static void test(){
        String s = new String("23 32 23 23 5 2 5 2 5 325 3 25 2 5 32 532");
        String splitStr = new String(" ");

        System.out.println(s);
        System.out.println(splitStr);

        String[] newArray = getBySplit(s, splitStr);
        System.out.println("len is " + newArray.length);
        for (int i = 0; i < newArray.length; i++) {
            System.out.println(newArray[i]);
        }

    }
}
