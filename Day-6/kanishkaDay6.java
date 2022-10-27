import java.util.*;
import java.lang.Math;

class string {
    String encryption(String s) {
        String str = s.replace(" ", "");
        int row, column;
        int length = str.length();
        double num = Math.sqrt(length);
        int floor = (int) Math.floor(num);
        int ceil = (int) Math.ceil(num);
        row = floor;
        column = ceil;
        if (row * column < length) {
            row++;
        }
        int a = 0;
        char arr[][] = new char[row][column];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (a == s.length())
                    arr[i][j] = ' ';
                else
                    arr[i][j] = s.charAt(a++);

            }
            if (a == s.length())
                break;
        }
        String temp = "";
        boolean go = false;
        for (int i = 0; i < column; i++) {
            for (int j = 0; j < row; j++) {
                if (!(arr[j][i] == ' ')) {
                    temp = temp + arr[j][i];
                    go = true;
                }
            }
            if (go)
                temp = temp + " ";
            go = false;
        }
        return temp;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        string obj1 = new string();
        String something = obj1.encryption(s);
        System.out.println(something);
        sc.close();
    }
}
