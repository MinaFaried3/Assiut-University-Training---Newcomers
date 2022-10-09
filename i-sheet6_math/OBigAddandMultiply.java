
import java.math.BigInteger;
import java.util.Scanner;

public class OBigAddandMultiply {

    public static void main(String[] args) {

        try (Scanner scanner = new Scanner(System.in)) {
            String num = scanner.next();
            BigInteger bigInteger1 = new BigInteger(num);
            BigInteger bigInteger2 = new BigInteger("9999");
            System.out.println(bigInteger1.add(bigInteger2));
            System.out.println(bigInteger1.multiply(bigInteger2));
        }
    }

}