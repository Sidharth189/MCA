import java.util.Scanner;

class Matrix{
    int[][] matrix;
    int rows,cols;
    void setMatrix(int rows,int cols)
    {
        this.rows=rows;
        this.cols=cols;
        matrix=new int[rows][cols];
        Scanner sc=new Scanner(System.in);

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                System.out.print("Enter element ("+i+"*"+j+"): ");
                matrix[i][j]=sc.nextInt();
            }
        }
    }

    void multiply(Matrix obj)
    {
        int[][] sol_matrix=new int[this.rows][obj.cols];

        if(this.cols!=obj.rows)
        {
            System.out.print("\n Multiplication not possible !!");
            return;
        }

        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<obj.cols;j++)
            {
                int temp=0;
                for(int k=0;k<cols;k++)
                {
                    temp=temp+(matrix[i][k]*obj.matrix[k][j]);
                }
                sol_matrix[i][j]=temp;
            }
        }

        for(int i=0;i<rows;i++){
            for(int j=0;j<obj.cols;j++){
                System.out.print(sol_matrix[i][j]+" ");
            }
            System.out.print("\n");
        }

    }


}


public class Lab_5 {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);

        Matrix m1=new Matrix();
        Matrix m2=new Matrix();

        System.out.print("\nMatrix 1: ");
        System.out.print("\nNo. of rows: ");
        int rows=sc.nextInt();
        System.out.print("\nNo. of cols: ");
        int cols=sc.nextInt();
        m1.setMatrix(rows,cols);

        System.out.print("\nMatrix 2: ");
        System.out.print("\nNo. of rows: ");
        rows=sc.nextInt();
        System.out.print("\nNo. of cols: ");
        cols=sc.nextInt();
        m2.setMatrix(rows,cols);

        m1.multiply(m2);

    }        
}
