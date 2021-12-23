import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        int []flipped = new int[110];
        int n = in.nextInt();
                
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int k = in.nextInt();
                if (k == 0 || k == -1) continue;
                
                switch ( k ) {
                    case 1:
                        flipped[i]++;
                        break;
                    case 2:
                        flipped[j]++;
                        break;
                    case 3:
                        flipped[i]++;
                        flipped[j]++;
                        break;
                }
            }
        }
            
        int cnt = 0;
        String res = "";
        for (int i = 0; i < n; ++i) {
            if (flipped[i] == 0) {
                cnt++;
                res += (i + 1);
                res += " ";
            }
        }
        
        System.out.println(cnt);
        System.out.println(res);
    }   
}
