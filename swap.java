public class swap {
    public static void main(String[] args) {
        int a =  4 , b= 5;
        
    // 

     //with using bitwise operator
        b = a^b;
        a = a^b;
        b  = a^b;
        System.out.println(a + " " + b);
         a = a^b;
        b= a^b;
        a = a^b;
        System.out.println(a + " " + b);

    }
}
