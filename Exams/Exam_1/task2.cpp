#include <iostream>
using namespace std;

int main()
{
    double inputSum;

    cout << "Enter a sum under 100 lv.: ";
    cin >> inputSum;

    int lev;
    double stotinki20;
    int times20;
    double stotinki5;
    int times5;
    double stotinki1;
    int times1;

    

    cout << inputSum << " lv. + " << times20 
                    << " x 20 st. + " << times5 
                    << " x 5 st. + " << times1 
                    << " x 1 st.";

    return 0;
}