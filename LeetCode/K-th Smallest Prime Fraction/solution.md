Declaring a priority queue with size k and comparator function
```
PriorityQueue<Element> minHeap = new PriorityQueue<Element>(k,(a,b)->(arr[a.i]*arr[b.j]-arr[b.i]*arr[a.j]));
```

Creating and returning an array
```
return new int[]{arr[e.i],arr[e.j]};
```

Sample model to be used in Priority Queue
```
class Element{
    int i;
    int j;
    
    Element(int i,int j){
        this.i = i;
        this.j = j;
    }
}
```