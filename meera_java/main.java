import java.util.Scanner;
public class Rotate{
    public static void main(String args[]){
        Scanner scan=new Scanner(System.in);
        System.out.println("M=");
        int M=Integer.parseInt(scan.nextLine());
        System.out.println("N=");
        int N=Integer.parseInt(scan.nextLine());
        if(M<3||N<3||M>9||N>9){
        System.out.println("INVALID INPUT");
        return;
    }
    int a[][]=new int[M][N];
    int b[][]=new int[N][M];
    int sum=0;
    System.out.println("Enter elements:");
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            a[i][j]=Integer.parseInt(scan.nextLine());
            if(a[i][j]%2!=0){
                sum+=a[i][j];
            }
        }
    }
    System.out.println("ORIGINAL MATRIX");
    System.out.println("a "+a)
    display(a);
    int q=0;
    for(int i=M-1;i>=0;i--){
        int p=0;
        for(int j=0;j<N;j++){
            b[p][q]=a[i][j];
            p++;
        }
        q++;
    }
    System.out.print("ROTATED MATRIX");
    display(b,N,M);
    
    System.out.println("Sum of the odd elements"+sum);
}
    public static void display(int a[][], int M,int N){
        for(int i=0;i<M;i++){
          for(int j=0;j<N;j++){
              System.out.print(a[i][j]+"\n");
     }
}
}
}