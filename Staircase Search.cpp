//Logic for Staircase search
if(element<matrix[0][0] || element> matrix[0][0])
return false;
int row=0,col=n-1;
while(row<=n-1 && col>0){
if(matrix[row][col]<element){
row++;
}
elseif(matrix[row][col]>element){
col--;
}
else
return true;
}
return false;
