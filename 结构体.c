#include<stdio.h>

struct student
{
   int age;
  float score; 
};
  int main()
    {
        struct student s1,s2;
        
            s1.age=20;
            s1.score=77.2;
            s2.age=19;
            s2.score=56.2;
        
        printf("第一个人age:%d,score:%.1f\n",s1.age,s1.score);
        printf("第二个人age:%d,score:%.1f",s2.age,s2.score);
    
    return 0;
    
}