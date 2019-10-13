package TryCatchBlock;

import java.util.*;


class tryCatch1
{
    public static int divideByZero(int a,int b)
    {
        return a/b;
    }
    public static void main()
    {
        try
        {
            System.out.println(tryCatch1.divideByZero(13,7));
            System.out.println(tryCatch1.divideByZero(13,0));
        }
        catch(ArithmeticException e)
        {
            System.out.println("Divide by zero error");
        }
    }
}