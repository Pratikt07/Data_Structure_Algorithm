package Array;

public class moveAllNegativeOneSide {
    public static void main(String[] args) {
        int arr[] = {-1,2,3,-44,3,2,55,-2,34,-90};
        int i=0,j=0;
        while(i<arr.length){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            if(j==arr.length-1){
                i++;
                j=i;
            }
            else{
                j++;
            }
        }

        for(int value : arr){
            System.out.print(" "+value);
        }
        System.out.println("");
    }
}
