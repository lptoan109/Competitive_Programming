#include<bits/stdc++.h>
using namespace std;

// Tên bài
const string NAME = "CHITIEU";

// Số test chúng ta muốn kiểm tra
const int TEST = 50;

// Trong code gen để debug, các bạn có thể giữ nguyên seed để đảm bảo lần nào generator cũng generate ra những test giống nhau.
// Như vậy, các bạn đảm bảo rằng code của mình thỏa mãn tất cả những test từng sai
mt19937 rng(7405);

// Còn nếu các bạn muổn random hoàn toàn có thể dùng
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// Hàm này trả về một số bất kì trong khoảng [l, r]
int rnd(int l, int r){
    // rng() trả về một số bất kì
    return abs((int)rng() % (r - l + 1)) + l;
}

// Hàm này được dùng để tạo ra test
void generate_test(){
    // Chúng ta sinh test và xuất ra file .inp
    // Mỗi lần chúng ta xuất ra file .inp, ta sẽ in đè lên input cũ
    ofstream inp((NAME + ".INP").c_str());
    // sinh test ở đây
    int n,k;
    n = rnd(1,1000);
    k = rnd(1,100);
    inp << n << " " << k << "\n";
    for(int i = 1; i<=n; ++i){
        inp << rnd(k-1,k+1) << " ";
    }
    inp.close();
}

// Ở khá nhiều bài, việc check output chỉ đơn thuần là so sánh xem output của file .out và .ans có ra giống hệt nhau không.
// Đây là một trong những bài đó
bool check_test(){
    // Lệnh dưới đây kiểm tra hai file có giống hệt nhau hay không
    if(system(("fc " + NAME + ".OUT " + NAME + ".ANS").c_str()) != 0){// 2 file khác nhau
        return 0;
    }
    else{
        return 1;
    }
}

// Hàm này được dùng để kiểm tra output của một bài bất kì
bool general_check_test(){
    // Ta nhập vào output từ file output được sinh ra từ
    ifstream out1((NAME + ".OUT").c_str());
    ifstream out2((NAME + ".ANS").c_str());
    // nhập vào dữ liệu của 2 file và check xem output của file .out có thỏa mãn không

}

void process(){
    for(int itest = 1; itest <= TEST; itest++){
        generate_test();
        // 2 dòng tiếp theo để chạy 2 code mẫu và code trâu
        system((".\\" + NAME + ".exe").c_str());
        system((".\\" + NAME + "_trau.exe").c_str());
        bool ok = check_test();
        if(!ok){
            cout << "TEST " << itest << ": WA\n";
            exit(0);// Dừng lại ngay khi tìm được test sai
        }
        else{
            cout << "TEST " << itest << ": AC\n";
        }
    }
}

signed main(){
    // Việc không để ios_base::sync_with_stdio(0)/cin.tie(0) là để dễ xem trạng thái của từng test
    process();
}
