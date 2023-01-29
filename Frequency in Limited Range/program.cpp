void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        map<int,int>mp;
        int j=0;
        for(int i=0;i<N;i++)
        {
            mp[arr[i]]++;
        }
         for(int i=1; i<=N; i++){

            if(mp.find(i)!=mp.end())

                arr[j++]=mp[i];

            else 

                arr[j++]=0;

        }
    }
