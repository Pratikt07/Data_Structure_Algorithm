package Array;

import java.util.ArrayList;

import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;

public class unionAndIntersectionTwoArrays {
    public static void main(String[] args) {
        int arr1[] = {123};
        int arr2[] = {1,1,1,1};
        int size1=arr1.length,size2=arr2.length;
        HashSet<Integer> firstArr= new HashSet<Integer>(); 
        HashSet<Integer> SecondArr= new HashSet<Integer>(); 
        HashSet<Integer> Union = new HashSet<Integer>();
        HashSet<Integer> com = new HashSet<Integer>();
      
    //   for(int i=0;i<size1;i++){
    //        Union.add(arr1[i]);
    //   }
      for(int i=0;i<size1;i++){
      
        firstArr.add(arr1[i]);
    }
      for(int i=0;i<size2;i++){
      
		  SecondArr.add(arr2[i]);
      }
      for(int i=0;i<size2;i++){
          if(Union.contains(arr2[i])){
              if(firstArr.contains(arr2[i]) && SecondArr.contains(arr2[i])){
                com.add(arr2[i]);
              }
                
          }else{
              Union.add(arr2[i]);
          }
      }

      

      System.out.println("Intersection of Two Arrays is :");
      Iterator<Integer> it1 = com.iterator();
      while(it1.hasNext()){
          
          System.out.print(" "+it1.next());
      }
        System.out.println("");
        List<Integer> list = new ArrayList<Integer>(Union); 
        Collections.sort(list);
        System.out.println("Union of Two Arrays is :");
      Iterator<Integer> it = list.iterator();
      while(it.hasNext()){
          System.out.print(" "+it.next());
      }

        
        
    }
}
