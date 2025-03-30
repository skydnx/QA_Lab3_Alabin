#ifndef VIDEOFILE_H  // ���������, �� ��������� �� ��� ���� ����
#define VIDEOFILE_H  // ���������� VIDEOFILE_H, ����� ������������� ��������� ��������� ������������� �����

#include "MediaFile.h"  // ���������� ������� ����� MediaFile

/**
 * @brief ����� ����������.
 *
 * ���� ����� ����������� �� `MediaFile` � ��������� �������� ���������� �����.
 */
class VideoFile : public MediaFile {  // ����� VideoFile ����������� �� MediaFile
public:
    int resolution;  ///< ���������� ����� � �������� (��������, 1080p)

    /**
     * @brief ����������� ������ VideoFile.
     * @param n �������� �����
     * @param d ������������ � ��������
     * @param res ���������� ����� (� ��������)
     *
     * ����������� �������� ����������� ������������� ������ `MediaFile`
     * � ��������� ���� ���������� `resolution`.
     */
    VideoFile(string n, int d, int res) : MediaFile(n, d), resolution(res) {}

    /**
     * @brief ������� ���������� � ����������.
     *
     * ���� ����� �������������� `info()` �� `MediaFile`,
     * �������� ����� ���������� �����.
     */
    void info() override {  // �������������� ����������� ����� info()
        cout << "�����: " << name << ", ������������: " << duration
            << " ���, ����������: " << resolution << "p" << endl;
    }
};

#endif // ��������� �������� ���������� (���� ���� ��� ��� �������, �� �� ����������� �����)
