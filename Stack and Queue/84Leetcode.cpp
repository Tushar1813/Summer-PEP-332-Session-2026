//After pre and right
int maxArea=0;
for(int i=0;i<n;i++){
    int height=heights[i];
    int width=right[i]-left[i]-1;
    int area=height*width;
    maxArea=max(maxArea,area);
}
return maxArea;

