vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            unordered_map<int, int> a;
            unordered_map<int, int> b;
            unordered_map<int, int> c;
            vector<int> v;
            for (int i = 0; i < n1; i++)
                a[A[i]]++;
            for (int j = 0; j < n2; j++)
                b[B[j]]++;
            for (int i = 0; i < n3; i++)
                c[C[i]]++;
            
            for (int i = 0; i < n1; i++)
                if (a[A[i]] > 0 && b[A[i]] > 0 && c[A[i]] > 0)
                    v.push_back(A[i]), a[A[i]] = 0;
           
           return v;
            
        }