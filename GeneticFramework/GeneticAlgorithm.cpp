#include "GeneticAlgorithm.h"
#include <algorithm>

using namespace ga;

ga::GeneticAlgorithm::GeneticAlgorithm()
{
}


ga::GeneticAlgorithm::~GeneticAlgorithm()
{
}

ga::pEpoch ga::GeneticAlgorithm::Selection(double unchange_perc, double mutation_perc, double crossover_perc)
{
	// ���������� ������ �� ��������� �����.
	sort(epoch->population.begin(), epoch->population.end(),
		[](std::pair<int, pIIndividual> a, std::pair<int, pIIndividual> b)
	{
		return a.first > b.first;
	});

	// ����� ���������� ������� ������ ���������� ������ ��� �������� � ��������� ���������.
	// ��������� ����� ��������� ��������� ������������� � �������������� ������.
	throw "Stub called!";
}

