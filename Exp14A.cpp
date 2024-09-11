// NAME - Pranjal Panwar 
// PRN - 23070123164 
// EXPERIMENT - 14(A)  

# include <iostream>
# include <string>
using namespace std;

class Uni
{
    public:
    string uni= "Symbiosis";
    void discipline()
    {
        cout << "Engineering" <<endl;
    }
};
class Dep : public Uni
{
    public:
    string dept= " Electronics & Telecommunication";
};
int main()
{
    Dep u1;
    u1.discipline();
    cout<<u1.uni + " "+u1.dept ;
} 

// Output 
// 
// Engineering
// Symbiosis  Electronics & Telecommunication
