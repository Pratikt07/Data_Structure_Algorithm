package Array;

public class findMinMaxInArray {
    public static void main(String[] args){
        int [] arr = {-2,1,11,4,5,6,7,8,9};
        int min=arr[0];
        int max=arr[0];
        for(int i=0;i<arr.length;i++){
            if(max<=arr[i]){
                max=arr[i];
            }
            if(min>=arr[i]){
                min=arr[i];
            }
        }
        System.out.println("min = "+min+" max = "+max);
    }
}
