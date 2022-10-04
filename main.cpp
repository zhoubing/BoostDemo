#include <iostream>
#include <boost/version.hpp>
#include <boost/config.hpp>
#include <boost/timer.hpp>
#include <boost/progress.hpp>

#include <boost/thread.hpp>

#include <boost/json.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/filesystem.hpp>


using namespace std;

void foo() {
    cout << "thread!!!" << endl;
}

//int main() {
//    cout << BOOST_VERSION << endl;
//    cout << BOOST_PLATFORM << endl;
//
//    boost::filesystem::fstream in_;
//    in_.open(boost::filesystem::path("../a.json"));
//    if (!in_.is_open()) {
//        return 0;
//    }
//    char buf[256];
//    string str;
//    while (!in_.eof()) {
//        in_.getline(buf, size(buf));
//        str.append(std::string(buf));
//    }
//    auto par = boost::json::parse(str);
//    for (auto &x: par.as_object()) {
//        cout << x.key() << endl;
//        cout << x.value() << endl;
//    }
//
//    boost::timer t;
//    boost::progress_display pd(100);
//
//    for (int i = 0; i < 100; i++) {
//        ++pd;
//    }
//
//    boost::thread_group threads;
//    threads.create_thread(foo);
//
//    threads.join_all();
//    return 0;
//}
