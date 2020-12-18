package Array;

public class zeroOneTwosArraySort {
    public static void main(String[] args){
        int arr[] = {2,2,1,1,1,0,0,0,1,2,0,0,2,2,1,0,2,1,0,2,1,0,2,2,2,2,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int i=0;
        int j=0;
            while(i<arr.length){
            
            if(arr[i]>=arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        
            if(j==arr.length-1){
                
                i++;
                j=i;
                
            }else
                j++;
        }

        for(int in : arr){
            System.out.print(" "+in);
        }
        System.out.println("");
    }
}
