package Array;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Scanner;

public class kthMaxMinArray {

    public static void main(String[] args){
        int [] arr = {5,6,7,7,8,8,9,10,1,2,2,3,4};
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter minimum value: ");
        int min = sc.nextInt();
        System.out.println("Enter  maximum value  : ");
        int max = sc.nextInt();
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]>=arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        HashSet<Integer> arr1 = new HashSet<Integer>();
        for (int integer : arr) {
            arr1.add(integer);
        }
        int size = arr1.size();
        Iterator<Integer> it = arr1.iterator();
        int i=0;
       
        while(it.hasNext()){
            arr[i++] = it.next();
           
        }
       
        sc.close();
        System.out.println(min+"th minimum = "+arr[min-1]+" and "+max+"th  maximum = "+arr[size-max]);
    }
}

