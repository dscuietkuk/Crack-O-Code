Homecoding problemsHackerRank Beautiful Triplets problem solution
HackerRank Beautiful Triplets problem solution
YASH PALMarch 31, 2021

In this HackerRank Beautiful Triplets problem you have Given an increasing sequence of integers and the value of d, count the number of beautiful triplets in the sequence.


HackerRank Beautiful Triplets problem solution


Problem solution in Python programming.
n, d = [int(r) for r in input().split()]
a = [int(r) for r in input().split()]

triplets = 0
for i in range(n-2):
    for j in range(i + 1, n-1):
        if a[j] - a[i] == d:
            foundTrip = False
            for k in range(j + 1, n):
                if a[k] - a[j] == d:
                    triplets += 1
                    foundTrip = True
                    break
            if foundTrip == True:
                break
            
print(triplets)
            


Problem solution in Java Programming.
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int d = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int ans = solve(n, d, a);
        System.out.println(ans);
    }

    private static int solve(int n, int d, int[] a) {
        Map<Integer, Integer> m1 = new HashMap<>();
        Map<Integer, Integer> m2 = new HashMap<>();

        int r = 0;
        for (int i = 0; i < n; i++) {
            if (m2.containsKey(a[i])) {
                int c = m2.remove(a[i]);
                r += c;
            }
            if (m1.containsKey(a[i])) {
                int c = m1.remove(a[i]);
                m2.put(a[i] + d, c);
            }
            add(m1, a[i]+d);
        }
        return r;
    }

    private static void add(Map<Integer, Integer> map, int key) {
        Integer old = map.get(key);
        if (old == null) {
            old = 0;
        }
        old++;
        map.put(key, old);
    }
}
