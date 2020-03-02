#pragma once

#include <ctime>
#include <sstream>
#include <string>

class CrashLog {

    public:
        CrashLog(const std::string &cause, const std::string &info);
        void createLog(const std::string &path);

    private:
        std::string description;
        std::string details;
        std::ostringstream filename;
        std::tm *now;
};
