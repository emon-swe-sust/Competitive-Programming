#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n,k,i,j,u,v,bal=0;
	cin >> n >> k;
	long long dad[n+1],val[n+2],visit[n+1],child[n+1];
	memset(visit,0,sizeof(visit));
	memset(child,0,sizeof(child));
	vector<long long> vec[n+1];
	vector<pair<long long,long long> >pvec;
	vector<long long> taken;
	for(i=0;i<n-1;i++)
    {
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    if(n-k == (long long)1)
    {
        cout << k << endl;
        return 0;
    }
    queue<long long>q;
    q.push((long long)1);
    val[1] = (long long)0;
    visit[1] = (long long)1;
    while(!q.empty())
    {
        long long now = q.front();
        q.pop();
        for(i=0;i<vec[now].size();i++)
        {
            if(visit[vec[now][i]] == 0)
            {
                dad[vec[now][i]] = now;
                visit[vec[now][i]] = 1;
                q.push(vec[now][i]);
                val[vec[now][i]] = val[now] + 1;
                pvec.push_back({val[vec[now][i]],vec[now][i]});
            }
        }
    }

    sort(pvec.begin(),pvec.end());
    reverse(pvec.begin(),pvec.end());

    for(i=0;i<pvec.size();i++)
    {
        long long xx = pvec[i].second;
        for(j=0;j<vec[xx].size();j++)
        {
            if(dad[xx] == vec[xx][j]){
                child[vec[xx][j]] += child[xx]+1;
               // cout << vec[xx][j] << " - " <<  child[vec[xx][j]] << endl;
            }
        }
    }

    for(i=0;i<pvec.size();i++)
    {
        if(pvec[i].second != 1)
        {

            //cout << pvec[i].second << " " << pvec[i].first << " " << vec[pvec[i].second].size() << endl;
            long long cnt=0;
            long long curr = pvec[i].second;
            if(vec[curr].size() == 1)
            {
                taken.push_back(pvec[i].first);
                continue;
            }
            for(j=0;j<vec[curr].size();j++)
            {
                if(dad[curr] != vec[curr][j])
                    cnt += child[vec[curr][j]]+1;
            }
            //cnt -= (vec[pvec[i].second].size()-1);
            //cout << curr << " " << cnt << endl;
            taken.push_back(pvec[i].first-cnt);
        }
    }
    sort(taken.begin(),taken.end());
    reverse(taken.begin(),taken.end());
    for(i=0;i<k;i++)
    {
       // cout << taken[i] << " ";
        bal += taken[i];
    }
    cout << bal << endl;

	return 0;
}
