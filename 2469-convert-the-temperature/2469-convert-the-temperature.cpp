class Solution {
public:
    vector<double> convertTemperature(double celsius) {
  vector<double> ans;

double Kelvin =celsius + 273.15;
double fahrenheit=celsius * 1.80 + 32.00;

ans.push_back(Kelvin);
ans.push_back(fahrenheit);

return ans;
        
    }
};

