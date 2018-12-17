package lei.yu.algorithm.book.chapter1;

public class GetFileNameFromCmd {

    // if only one arg
    static String getBaseName(String[] args) {
        String str = args[0];
        int dotPos = str.indexOf(".");

        return str.substring(0, dotPos);
    }

    // if only one arg
    static String getExtensionName(String[] args) {
        String str = args[0];
        int dotPos = str.indexOf(".");

        return str.substring(dotPos + 1, str.length());
    }
}
