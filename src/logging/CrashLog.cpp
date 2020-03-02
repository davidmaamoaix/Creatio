#include <ctime>
#include <fstream>
#include <iostream>

#include "CrashLog.h"

CrashLog::CrashLog(const std::string &cause, const std::string &info)
: details{info}
{
    std::time_t time = std::time(0);
    now = std::localtime(&time);

    int year = now->tm_year + 1900;
    int month = now->tm_mon + 1;

    filename << "crash-" << year << "_" << month << "_" << now->tm_mday << "-";
    filename << now->tm_hour << "." << now->tm_min << "." << now->tm_sec << ".txt";

    description = "Cause: " + cause;
}

void CrashLog::createLog(const std::string &path) {
    std::ofstream file;

    file.open(path + filename.str());

    if (!file.is_open()) {
        std::cout << "LOG CREATION FAILED" << std::endl;
        std::cout << description << std::endl;
        std::cout << details << std::endl;
        return;
    }

    file << "=== Creatio Crash Log ===" << "\n\n";

    file << "Date: " << (now->tm_year + 1900) << "/";
    file << (now->tm_mon + 1) << "/" << now->tm_mday << "\n";

    file << "Time: " << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec;
    file << "\n\n";

    file << description << "\n" << details << std::endl;

    file.close();
}