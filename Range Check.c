int main() {

    int n,low,high;
        scanf("%d",&n);
        scanf("%d",&low);
        scanf("%d",&high);
    if(n>=low && n<=high)
    {
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}
