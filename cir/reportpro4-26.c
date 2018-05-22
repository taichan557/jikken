#include<stdio.h>
#include<math.h>

/*正直変数名，関数名が適切でないため，わかりづらいプログラムになってしまった*/
int main(char filename){
  int n,m,k,s;
  FILE *fp;          
  int del,fk[2000],ans[2000],xn[2000],t[2000];
  int left,right,sum;

  fp=fopen(filename,"r");
  
  scanf("%d%d",&m,&del);
  
  
  for(k=0;k<=(m/2-1);k++){

    fscanf(fp,"%f,%f",t,xn);
    s=k*m*del;  
    fk[k]=log10(s);

    
    for (n=0;n<=(m-1);n++){
      left=left+((xn*cos(2*(M_PI)*k*n))/m);
      right=right+((xn*sin(2*(M_PI)*k*n))/m);
    }
    
    left=left*left;
    right=right*right;

    sum=left+right;  
    del=del*del;

    ans[k]=sum*del;

      

    }
  fclose(fp);
    return 0;
}


