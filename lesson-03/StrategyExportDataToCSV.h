#pragma once
#include "StrategyExportData.h"
#include "Group.h"

// ����� ��������� ��� �������� ������ � CSV �������
class StrategyExportDataToCSV : public StrategyExportData
{
public:
	StrategyExportDataToCSV();
	~StrategyExportDataToCSV() = default;
private:
	std::string exportData(std::vector<std::unique_ptr<Student>>& students) override;
};

