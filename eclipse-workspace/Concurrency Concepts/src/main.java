public class main {

    public static void countToTwenty() {
        for (int i = 0; i <= 20; i++) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
    
    public static void countToZero() {
        for (int i = 20; i >= 0; i--) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        Thread thread1 = new Thread(() -> countToTwenty());
        Thread thread2 = new Thread(() -> countToZero());
        try {
            thread1.start();
            thread1.join();
            thread2.start();
            thread2.join();
        } 
        catch (InterruptedException e) {
            System.out.println("Thread interupted.");
        }
    }
}