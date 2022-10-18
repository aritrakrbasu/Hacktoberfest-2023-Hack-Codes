class Solution {
    public int maxArea(int[] height) {
        int left = 0;
        int right = height.length-1;
        int max_area = 0;
        
        while(left<right){
            int w = right - left; //width
            int h = Math.min(height[left],height[right]); //height
            int curr_area = w*h; // calculated area with current width,height
            max_area = Math.max(max_area,curr_area);
            
            
            if(height[left]<height[right]){
                left++;
            }else if(height[left]>height[right]){
                right--;
            }else{
                left++;
                right--;
            }
            
        }
        return max_area;
        
    }
}
