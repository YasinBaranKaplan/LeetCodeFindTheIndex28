#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {

       if(needle==""){
            return 0;}


       int finder =haystack.find(needle);

        if(finder !=string::npos){

            return finder;

        }
        else{
            return -1;
        }

        return(0);
    }
};
int main()
{
    Solution a;
    cout<<a.strStr("Mehmet","ehmet");

}
