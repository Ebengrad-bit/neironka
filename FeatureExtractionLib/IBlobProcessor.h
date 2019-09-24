#pragma once

#include <opencv2/opencv.hpp>
#include <vector>

namespace fe {
	/*
	 * ��������� ����������� ������� ��������.
	 */
	class IBlobProcessor
	{
	public:
		/**
		 * ����� ������� ������� �� �����������. ������� ������� ������������ ����� ���, ����� ������� �������.
		 * @param image - ����������� ��� ������ ������� ��������,
		 *				  ������ ����� ��� CV_8UC1.
		 * @param blobs - ����� ��� ������ �������������������� ������� ��������.
		 */
		virtual std::vector<cv::Mat> DetectBlobs(cv::Mat image) = 0;

		/**
		 * �������� ������ ������� �������� � ������� ��������.
		 * @param blobs - ������� �������.
		 * @param normilized_blobs - ����� ��� ������ ������� �������� ������� �������.
		 * @param side - ������� �������� �� ������� ����� ���������� ��������������� ������� �������.
		 */
		virtual void NormalizeBlobs(
			std::vector<cv::Mat> & blobs,
			std::vector<cv::Mat> & normalized_blobs,
			int side
		) = 0;

		/**
		 * �������� �������� ������������� ����������� ������� ��������.
		 * @return ��������, �������� �������� ������ ��������� ������� �������� � ������� ������������.
		 */
		virtual std::string GetType() = 0;
	};
};