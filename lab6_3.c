int query(int node, int start, int end, int l, int r)
{
    if(r < start || end < l)
    {

        return 0;
    }
    if(l <= start && end <= r)
    {

        return tree[node];
    }

    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}
