#include "myheader.h"

int main() {
  cout << "This program is used to compute the value of the following series : " << endl;

  cout << "(x^0)/0! + (x^1)/1! + (x^2)/2! + (x^3)/3! + (x^4)/4! + ........ + (x^n)/n! " << endl;

  cout << "Please enter the value of x : " ;

  double x;
  cin >> x;

  int n;
  cout << endl << "Please enter an integer value for n : " ;
  cin >> n;
  cout << endl;

  double seriesValue = ComputeSeriesValue(x, n);
  cout << "The value of the series for the values entered is "
	<< seriesValue << endl;

  return 0;
}
