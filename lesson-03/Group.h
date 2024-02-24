#pragma once

#include <string>
#include <vector>
#include <memory>

#include "StrategyExportData.h"
#include "Student.h"

class Group
{
public:
	std::string name;
	std::vector<std::unique_ptr<Student>> group;
private:
	// ��������� �� ������ ���������
	std::unique_ptr<StrategyExportData> _strategy;
public:
	Group();
	~Group();
	// ����� ��� ������� ���������
	void setStrategy(std::unique_ptr<StrategyExportData>&& strategy);
	// ����������� ����� ��� ������ ������
	std::string exportData();
};

