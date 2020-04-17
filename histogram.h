#ifndef HISTOGRAM_H_INCLUDED
#define HISTOGRAM_H_INCLUDED

#include <vector>
#include <iostream>
using namespace std;

void find_minmax(const vector<double>& numbers, double& min, double& max);
vector <size_t> make_histogram(const vector<double>& numbers, size_t bin_count);
void show_histogram_text(vector <size_t>& bins);
void svg_begin(double width, double height);
void svg_end();
void svg_text(double left, double baseline, string text, string font_size = "12");
void svg_rect(double x = 0, double y = 0, double width = 100, double height = 200, string stroke = "black", string fill = "black");
void show_histogram_svg(const vector<size_t>& bins, size_t font_size);
bool check_size(size_t font_size);

#endif // HISTOGRAM_H_INCLUDED
