
//takes more memory
int main()
{
    long int n;
    
    int input;
    cin>>n;
    vector<int> a[n];
    set<int, greater <int>> s;
    for(int i=0;i<n;++i)
    {
        cin>>input;
        a.push_back(input);

    }
    for(int i = 0;i<n;++i)
    {
        s.insert(a[i]);
    }
    if(n - s.size() == 0)
    {
        cout<<"False";
        
    }
    else
    {
        cout<<"true";
    }
    return 0;
}
