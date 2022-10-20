import java.util.Scanner;

class findsum {

    void minMaxSum(int[] arr) {

        int min = 0;
        int max = 0;

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < arr.length - 1; i++) {
            min = min + arr[i];
        }

        for (int i = 1; i < arr.length; i++) {
            max = max + arr[i];
        }

        System.out.println(min + " " + max);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = new int[5];
        System.out.println("enter the five values (ps: input using space after each element)");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        findsum a1 = new findsum();
        a1.minMaxSum(arr);

    }
}
