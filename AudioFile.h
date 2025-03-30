#ifndef AUDIOFILE_H  // ���������, �� ��������� �� ��� ���� ����
#define AUDIOFILE_H  // ���������� AUDIOFILE_H, ����� ������������� ��������� ��������� ������������� �����

#include "MediaFile.h"  // ���������� ������� ����� MediaFile

/**
 * @brief ����� ����������.
 *
 * ���� ����� ����������� �� `MediaFile` � ��������� �������� ��������.
 */
class AudioFile : public MediaFile {  // ����� AudioFile ����������� �� MediaFile
public:
    int bitrate;  ///< ������� ���������� (���������� � ��������� � �������, kbps)

    /**
     * @brief ����������� ������ AudioFile.
     * @param n �������� �����
     * @param d ������������ � ��������
     * @param b ������� (� kbps)
     *
     * ����������� �������� ����������� ������������� ������ `MediaFile`
     * � ��������� ���� `bitrate`.
     */
    AudioFile(string n, int d, int b) : MediaFile(n, d), bitrate(b) {}

    /**
     * @brief ������� ���������� �� ����������.
     *
     * ���� ����� �������������� `info()` �� `MediaFile`,
     * �������� ����� ��������.
     */
    void info() override {  // �������������� ����������� ����� info()
        cout << "�����: " << name << ", ������������: " << duration
            << " ���, �������: " << bitrate << "kbps" << endl;
    }
};

#endif // ��������� �������� ���������� (���� ���� ��� ��� �������, �� �� ����������� �����)
