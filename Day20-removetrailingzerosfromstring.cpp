class Solutions{
    public:
    string removetrailingzeros{
        int n=num.size();
        for (int i = n-1; i >= 0; i--)
        {
            if (num[i] != '0')
            {
                return num.substr(0, i+1);
            }
            
        }
        return num;
    }
};
