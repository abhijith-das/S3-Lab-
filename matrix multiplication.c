import java.util.Scanner;
public class Main
{
    public static void main(String args[])
    {
        int r,c,i,j,r1,c1,sum=0,k;
        Scanner b=new Scanner(System.in);
        System.out.print("Enter number of rows and coloumns of first matrix: ");
        r=b.nextInt();
        c=b.nextInt();
        int m1[][]=new int[r][c];
        System.out.print("Enter number of rows and columns of second matrix: ");
        r1=b.nextInt();
        c1=b.nextInt();
        int m2[][]=new int[r1][c1];
        if(c!=r1)
        System.out.println("The matrices cannot be multiplied");
        else
        {
            System.out.println("Enter elements of first matrix:");
            for(i=0;i<r;i++)
            for(j=0;j<c;j++)
            m1[i][j]=b.nextInt();
            System.out.println("Enter the elements of second matrix:");
            for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
            m2[i][j]=b.nextInt();
            int m[][]=new int[r][c1];
            System.out.println("Matrix Multiplication: ");
            for(i=0;i<r;i++)
            for(j=0;j<c1;j++)
            {
                for(k=0;k<c;k++)
                sum=sum+(m1[i][k]*m2[k][j]);
                m[i][j]=sum;
                sum=0;
            }
            for(i=0;i<r;i++)
            {
                for(j=0;j<c1;j++)
                System.out.print(m[i][j]+"\t");
                System.out.print("\n");
            }  
        }
        
    }
}
