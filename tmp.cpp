#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <iostream>

using namespace std;

// vector<double> npvlist_slice = {1,3,435,233,33,545,656};

// int main() {
//     double max_npv = NAN;
//     int max_idx = 0;
//     for (unsigned idx=0; idx<npvlist_slice.size(); idx++) {
//         double i = npvlist_slice[idx];
//         if (std::isnan(max_npv)) {
//             max_npv = i;
//         } else {
//             if (i > max_npv) {
//                 max_npv = i;
//                 max_idx = idx;
//             }
//         }
//         cout << idx << "\t" << i << "\t" << max_npv << "\t" << max_idx << endl;
//     }
//     return 0;
// }

// const vector<double> resp_score_cutoff = {-999,0.301, 0.382, 0.44, 0.487, 0.528, 0.564, 0.596, 0.626, 0.654, 0.681, 0.706, 0.731, 0.755, 0.778, 0.802, 0.826, 0.85, 0.876, 0.908,999};
// const vector<double> resp_score_map = {0.13864729356390054, 0.22459838330093113, 0.28600177365441026, 0.33649386084583904, 0.38346351945969914, 0.423431105047749, 0.4622573933212812, 0.4991984719806269, 0.5331878027150556, 0.5643587994542975, 0.5986561615334766, 0.6245438111804632, 0.6552394596807204, 0.6815034619188922, 0.7122684948327024, 0.7397162152943584, 0.7652716668372045, 0.8040519799447458, 0.8360337005832793, 0.8830110167468195};

// double map_val(double score, const vector<double> &score_map, const vector<double> &score_cutoff) {
//     double res = 0;
//     for (unsigned i=0; i<score_map.size(); i++) {
//         if (score<score_cutoff[i+1] && score>=score_cutoff[i]) {
//             res = score_map[i];
//             cout << i << ":" << res << " " << score_map[i] << endl;
//         }
//         cout << score_cutoff[i] << " " << score << " " << score_cutoff[i+1] << " " << score_map[i] << " " << res  << endl;
//     }
//     return res;
// }

const vector<vector<float>> CUST_RISK_LEVEL = {
    {0.996, 1, 2},
    {0.993, 0.996, 4},
    {0.989, 0.993, 6},
    {0.984, 0.989, 10},
    {0.976, 0.984, 15},
    {0.968, 0.976, 20},
    {0, 0.968, 30},
};

int main(int argc, char const *argv[])
{
    float score = 0.9802885055541992;
    int cust_risk_level = -1;
    for (unsigned i=0; i<CUST_RISK_LEVEL.size(); i++) {
        if (CUST_RISK_LEVEL[i][0] <= score && score < CUST_RISK_LEVEL[i][1]) {
            cust_risk_level = CUST_RISK_LEVEL[i][2];
            break;
        }
    }
    // map<string, int> CUST_PROVINCE_LEVEL = {
    //     {"450000", 1}, {"630000", 1}, {"350000", 1}, {"640000", 1}, {"620000", 1},
    // };
    // string lbs = input_json["applyPosition|lbsProvince"];
    // if (!lbs.empty() && CUST_PROVINCE_LEVEL[lbs]) {
    //     cust_risk_level = (cust_risk_level == 2) ? 4 : 2;
    // }
    cout << cust_risk_level << endl;
    return 0;
}
