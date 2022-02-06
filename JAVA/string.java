public class string {
    public static void main(String[] args) {
        String str1 = "java"; // normal string
        System.out.println(str1);

        String str2 = new String("kiki"); // string in heap using new keyword
        System.out.println(str2);

        char c[] = { 'k', 'e', 's', 'h', 'a', 'v' }; // string using char array
        String str3 = new String(c);
        System.out.println(str3);


        byte b[] = { 65, 67, 89, 68 }; // string using byte array
        String str4 = new String(b);
        System.out.println(str4);
    }
}
