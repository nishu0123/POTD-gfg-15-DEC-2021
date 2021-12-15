 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //i will first make a vector in which commom lement will be there 
            //there might be some better approach to solve it but to remove the 
            //dublicate element i have used the map
            vector<int  > v;
            int i;
            int l1 = 0;
            int l2 = 0;
            while(l1 < n1 && l2 < n2)
            {
                if(A[l1] == B[l2])
                {
                    v.push_back(A[l1]);
                }
                
                if(A[l1] > B[l2])
                {
                    l2++;
                }
                else{
                    l1++;
                }
            }
            vector<int> ans;
            int n = v.size();
            l1 = 0;
            l2 = 0;
            while(l1 < n && l2<n3)
            {
                if(v[l1] == C[l2])
                {
                    ans.push_back(v[l1]);
                }
                
                if(v[l1] > C[l2])
                {
                    l2++;
                }
                else{
                    l1++;
                }
            }
            //herew we have to also remove the dublicate
            n = ans.size();
            map<int , int > m;
            for(i=0; i<n; i++)
            {
                m[ans[i]]++;
            }
            ans.clear();
            for(auto itr:m)
            {
                ans.push_back(itr.first);
            }
            
            return ans;
            //code here.
        }
