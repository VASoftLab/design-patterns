#include <iostream>
#include "Context.h"
#include "StrategyCSV.h"
#include "StrategyTXT.h"

int main()
{
    std::unique_ptr<Context> context = std::make_unique<Context>();
    // ��������� �
    context->setStrategy(std::make_unique<StrategyTXT>());
    context->exportData();
    // ��������� �
    context->setStrategy(std::make_unique<StrategyCSV>());
    context->exportData();
}
