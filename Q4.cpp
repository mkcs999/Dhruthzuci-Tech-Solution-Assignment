int findsingle(int *arr,int n){

int XOR=0;
for(int i=0;i<n;++i){
    XOR^=arr[i];
}
return XOR;
}
