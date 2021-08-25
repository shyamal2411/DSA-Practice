
class assemblyLine
	{
	    static int num_line=2;
	    static int num_station=6;
	    
	    static int min (int a , int b)
	    {
	        return a < b ? a : b;
	    }
	    
	    static int Ass(int a[][] ,int t[][] ,int e[],int  x[])
	    {
	        int t1[] = new int [num_station];
	        int t2[] = new int [num_station];
	        int i;
	        
	        t1[0]= e[0]+a[0][0];
	        t2[0]= e[1]+a[1][0];
	        
	        for (i=1;i<num_station;++i)
	        {
	            t1[i]= min(t1[i-1] + a[0][i] , t2[i-1] + t[1][i] + a[0][i]);
	            t2[i]= min(t2[i-1] + a[1][i] , t1[i-1] + t[0][i] + a[1][i]);
	        }
	        
	        return min(t1[num_station-1]+x[0] , t2[num_station-1] + x[1]);
	    }
	    
	    public static void main(String[] args)
	    {
	        int a[][] = { {2,8,9,3,4,1} , {6,11,2,2,7,3} };
	        int t[][] = { {0,3,1,2,1,3} , {0,3,4,1,1,3}  };
	        int e[] = {4,2} , x[] = {3,7};
	        System.out.println(Ass(a , t , e , x));
	    }
	}
