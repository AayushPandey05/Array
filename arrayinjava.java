//!..Array list in java....
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Test test = new Test();
        test.run();
    }
    
    static class Test {
        public void run() {
            ArrayList<Integer> al = new ArrayList<Integer>();
            al.add(10);
            al.add(20);
            al.add(30);
            System.out.println(al);
        }
    }
}

