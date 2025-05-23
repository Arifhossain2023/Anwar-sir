import java.io.*;

public class ExceptionDemo {
    public static void main(String[] args) {
        // Example 1: ClassNotFoundException
        try {
            // এখানে DummyClass নামে কোনো ক্লাস নেই, তাই exception আসবে
            Class.forName("DummyClass");
        } catch (ClassNotFoundException e) {
            System.out.println("Caught ClassNotFoundException:");
            System.out.println(e.getMessage());
        }

        // Example 2: EOFException
         try {
            FileOutputStream fos = new FileOutputStream("testfile.txt");
            ObjectOutputStream oos = new ObjectOutputStream(fos);

            oos.writeObject("Apple");
            oos.writeObject("Banana");
            oos.writeObject("Cherry");

            oos.close();
            System.out.println("Objects written to file.");
        } catch (IOException e) {
            System.out.println("Write Exception: " + e);
        }

        // Reading objects until EOFException occurs
        try {
            FileInputStream fis = new FileInputStream("testfile.txt");
            ObjectInputStream ois = new ObjectInputStream(fis);

            while (true) {
                String data = (String) ois.readObject();
                System.out.println("Read: " + data);
            }

        } catch (EOFException e) {
            System.out.println("Caught EOFException: End of file reached.");
        } catch (Exception e) {
            System.out.println("Other Exception: " + e);
        }
    }

}
