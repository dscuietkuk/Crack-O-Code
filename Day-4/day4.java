import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
class Abc
{
    public static void main(String args[])
    {
        Scanner sc =new Scanner(System.in);
        int a,ans,d;
        long n,m;
        a=sc.nextInt();
        while(a-->0)
        {
            ans=0;
            n=sc.nextLong();
            m=n;
            while(m!=0)
            {
                d=(int)m%10;
                m=m/10;
                if(d==0)
                continue;
                if(n%d==0)
                ans++;
            }
            System.out.println(ans);
        }
    }
}
