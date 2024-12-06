using namespace std;
#define MAX 100100

int seg[MAX*4];

void update(int idx, int l, int r, int i, int v){
    if(i < l || i > r) return;
    
    if(r == l){ 
        seg[idx] = v;
        return;
    }
    
    int mid = (r+l)/2;
    update(2*idx, l, mid, i, v);
    update(2*idx + 1, mid + 1, r, i, v);
    seg[idx] = seg[2*idx] + seg[2*idx + 1];
}

long long query(int idx, int l, int r, int i, int j){
    //printf("%d %d %d %d %d\n",idx,l,r,i,j);
    if(j < l || i > r) return 0;
    
    if(l>=i && r <= j) return seg[idx];
    
    int mid = (r+l)/2;
    return query(2*idx, l, mid, i, j) + query(2*idx + 1, mid + 1, r, i, j);
}

int main(){
    int n, q;
    scanf("%d %d", &n, &q);
    
    for(int i = 0; i < n; i++){
        int v;
        scanf("%d", &v);
        update(1, 0, n-1, i, v);
    }
    
    for(int i = 0; i < q; i++){
        int z;
        scanf("%d", &z);
        if(z == 0){
            int k, p;
            scanf("%d %d", &k, &p);
            update(1, 0, n-1, k-1, p);
        }else{
            int k;
            scanf("%d", &k);
            printf("%lld \n", query(1, 0, n-1, 0, k-1));
        }
    }
    
    return 0;
}
