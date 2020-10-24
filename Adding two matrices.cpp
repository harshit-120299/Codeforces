//https://practice.geeksforgeeks.org/problems/adding-two-matrices3512/1/?track=ppc-matrix&batchId=221
//matrix basics
//Initial Template for Java

import java.io.*;
import java.util.*;
class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n1 = sc.nextInt();
            int m1 = sc.nextInt();
            
            int A[][] = new int[n1][m1];
            for(int i = 0; i < n1; i++)
                for(int j = 0; j < m1; j++)
                    A[i][j] = sc.nextInt();

            int n2 = sc.nextInt();
            int m2 = sc.nextInt();
            int B[][] = new int[n2][m2];
            for(int i = 0; i < n2; i++)
                for(int j = 0; j < m2; j++)
                    B[i][j] =sc.nextInt();

            Solution ob = new Solution();
            int ans[][] = ob.sumMatrix(A,B);
            if(ans.length == 0)
                System.out.println(-1);
            else
            {
                for(int i = 0; i < ans.length; i++)
                for(int j = 0; j < ans[0].length; j++)
                    System.out.print(ans[i][j] +" "); 
                System.out.println();
            }
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    static int[][] sumMatrix(int A[][], int B[][])
    {
        int j[][]=new int[0][0];
        
        if(A.length==B.length && A[0].length==B[0].length){
            
            for(int x=0; x<A.length; x++){
                
               for(int y=0; y<A[0].length; y++){
                   
                    A[x][y]=A[x][y]+B[x][y];
                    
                } 
                
            }
            
            return A;
        }
        
        else return j;
    }
}