#include <iostream>
#include <fstream>

#include "StrategyExportDataToCSV.h"
#include "StrategyExportDataToTXT.h"

#include "Group.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    
    // �������� ������� ���������
    std::unique_ptr<Group> uts21 = std::make_unique<Group>();
    // ���� ������ � ������
    uts21->name = "UTS-21";
    uts21->group.push_back(std::move(std::make_unique<Student>("����������", "���������", "123-456-789 01", 2010, 4.5)));
    uts21->group.push_back(std::move(std::make_unique<Student>("���������", "�������", "123-456-789 02", 2010, 4.25)));
    uts21->group.push_back(std::move(std::make_unique<Student>("�������", "������", "123-456-789 03", 2009, 3.0)));
    uts21->group.push_back(std::move(std::make_unique<Student>("�����", "��������", "123-456-789 04", 2009, 5.0)));
    uts21->group.push_back(std::move(std::make_unique<Student>("�������", "������", "123-456-789 05", 2009, 5.0)));
    
    // ���������� ��������� - ������� � CSV
    uts21->setStrategy(std::make_unique<StrategyExportDataToCSV>());
    std::string outCSV = uts21->exportData();

    // ���������� ��������� - ������� �TXT
    uts21->setStrategy(std::make_unique<StrategyExportDataToTXT>());    
    std::string outTXT = uts21->exportData();

    std::ofstream fileCSV("output.csv");
    fileCSV << outCSV;
    fileCSV.close();

    std::ofstream fileTXT("output.txt");
    fileTXT << outTXT;
    fileTXT.close();
    
}