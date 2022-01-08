public class evenprime{

    public static void main(String[] args) throws InterruptedException {
        Runnable r = new Runnable1();
        Thread t = new Thread(r);
        t.start();
        t.join();
        Runnable r2 = new Runnable2();
        Thread t2 = new Thread(r2);
        t2.start();
    }
}

class Runnable2 implements Runnable{

    public void run(){

        for(int i=10;i<=50;i++){
            int c=0;
            for(int j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    c=c+1;
                }
            }
            if(c==1)
            {
                System.out.println(i);
            }
        }

    }
}

class Runnable1 implements Runnable{
    public void run(){

        for(int i=1;i<=50;i++){
            if(i%2 == 0)
                System.out.println(i);
        }
    }
}
