//Int

void sortInt(int ar[], int low, int mid, int high)
{
    int leftL,rightL;
    leftL=mid-low+1;
    rightL=high-mid;
    int LL[leftL], RR[rightL];
    int i,L=0,R=0,m=low;
    for(i=0; i<leftL; i++)
        LL[i]=ar[i+low];
    for(i=0; i<rightL; i++)
        RR[i]=ar[i+mid+1];
    while(L<leftL && R<rightL){
        if(LL[L]<=RR[R]){
            ar[m]=LL[L];
            L++;
        }
        else {
            ar[m]=RR[R];
            R++;
        }
        m++;
    }
    while(L<leftL){
        ar[m]=LL[L];
        L++;
        m++;
    }
    while(R<rightL){
        ar[m]=RR[R];
        R++;
        m++;
    }
    return ;
}

void mergeSortInt(int ar[],int low, int high)
{
    if(high>low){
        int mid = (low+high-1)/2;
        mergeSortInt(ar,low,mid);
        mergeSortInt(ar,mid+1,high);
        sortInt(ar,low,mid,high);
    }
    return ;
}


//Double
void sortDouble(double ar[], int low, int mid, int high)
{
    int i, R, L, m, rLen = high-mid, lLen = mid-low+1;
    double RR[rLen], LL[lLen];
    for(i=0; i<rLen; i++)
        RR[i]=ar[i+mid+1];
    for(i=0; i<lLen; i++)
        LL[i]=ar[i+low];
    R=L=0;
    m = low;
    while(R<rLen && L<lLen){
        if(LL[L]<=RR[R]){
            ar[m]=LL[L];
            L++;
        }
        else {
            ar[m]=RR[R];
            R++;
        }
        m++;
    }
    while(R<rLen){
        ar[m]=RR[R];
        R++;
        m++;
    }
    while(L<lLen){
        ar[m]=LL[L];
        L++;
        m++;
    }


    return ;
}

void mergeSortDouble(double ar[], int low, int high)
{
    if(low<high)
    {
        int mid = (high+low-1)/2;
        mergeSortDouble(ar,low,mid);
        mergeSortDouble(ar,mid+1,high);
        sortDouble(ar,low,mid,high);
    }
    return;
}


//Char
void sortChar(char ar[], int low, int mid, int high)
{
    int i, R, L, m, rLen = high-mid, lLen = mid-low+1;
    char RR[rLen], LL[lLen];
    for(i=0; i<rLen; i++)
        RR[i]=ar[i+mid+1];
    for(i=0; i<lLen; i++)
        LL[i]=ar[i+low];
    R=L=0;
    m = low;
    while(R<rLen && L<lLen){
        if(LL[L]<=RR[R]){
            ar[m]=LL[L];
            L++;
        }
        else {
            ar[m]=RR[R];
            R++;
        }
        m++;
    }
    while(R<rLen){
        ar[m]=RR[R];
        R++;
        m++;
    }
    while(L<lLen){
        ar[m]=LL[L];
        L++;
        m++;
    }


    return ;
}

void mergeSortChar(char ar[], int low, int high)
{
    if(low<high)
    {
        int mid = (high+low-1)/2;
        mergeSortChar(ar,low,mid);
        mergeSortChar(ar,mid+1,high);
        sortChar(ar,low,mid,high);
    }
    return;
}


void printArInt(int ar[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ",ar[i]);
    return;
}

void printArDouble(double ar[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%.2lf ",ar[i]);
    return;
}
