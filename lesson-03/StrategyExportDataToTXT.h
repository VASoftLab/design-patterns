#pragma once
#include "StrategyExportData.h"
// ����� ��������� ��� �������� ������ � TXT �������
class StrategyExportDataToTXT : public StrategyExportData
{
public:
	StrategyExportDataToTXT();
	~StrategyExportDataToTXT() = default;
private:
	std::string exportData(std::vector<std::unique_ptr<Student>>& students) override;
};

