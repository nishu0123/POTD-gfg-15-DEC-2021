vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                // i have used a pointer which will point to the -ve values and we will check if 
                //index of the negative value is in the k window or not if it is not in the window 
                //range it is int the left of the window then we will go to the next -ve element 
                //and then the process will continue
                
                
                //instead of using pointer we can also do this problem using queue.
                int i = 0;
                int index = 0;
                long long int k = K;
                while(A[i] > 0 && i<N)
                {
                    i++;
                }
                index = i;
                int l = 0;
                vector<long long > ans;
                int cnt = 0;
                for(i=k-1; i<N; i++)
                {
                    if(index < l)
                    {
                        cnt = index+1;
                        while(cnt < N && A[cnt] > 0)
                        {
                            cnt++;
                        }
                        if(cnt < N)
                        {
                            index = cnt;
                        }
                    }
                    
                    if(index >= l && index <= i)
                    {
                        ans.push_back(A[index]);
                    }
                    else{
                        ans.push_back(0);
                    }
                    l++;
                }
                return ans;                                           
 }
