package Array;

import java.util.Scanner;

class reverseArrayOrString{
    public static void main(String[] args){
        int size=0;
        Scanner sc = new Scanner(System.in);
        size = sc.nextInt();
        int [] arr = new int[size];
        for(int i=0;i<size;i++){
            int value;
            System.out.println("Enter value for "+(i+1)+" element :");
            value = sc.nextInt();
            arr[i] = value;
        }
        for(int i=0;i<arr.length/2;i++){
            int temp = arr[arr.length-1-i];
            arr[arr.length-1-i] = arr[i];
            arr[i] = temp;
        }
        for(int i : arr){
            System.out.print(" "+i);
        }
        sc.close();
        System.out.println("");
    } 
}


