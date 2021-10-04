class Solution {
    public int[] kthSmallestPrimeFraction(int[] arr, int k) {
        int n = arr.length;
        PriorityQueue<Element> minHeap = new PriorityQueue<Element>(k,(a,b)->(arr[a.i]*arr[b.j]-arr[b.i]*arr[a.j]));
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                minHeap.add(new Element(i,j));
            }
        }
        
        Element e=null;
        while(k!=0){
            e = minHeap.poll();
            k--;
        }
        return new int[]{arr[e.i],arr[e.j]};
    }
}

class Element{
    int i;
    int j;
    
    Element(int i,int j){
        this.i = i;
        this.j = j;
    }
}